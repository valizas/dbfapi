#!/usr/bin/python2
from dbfpy import dbf
from pprint import pprint

def crear_tabla_driver(nombre):
    db = dbf.Dbf("%s.dbf"%(nombre,), new=True)
    db.addField(
        ("LINEREADY" , "C" , 1),
        ("NROLIN" , "N" , 18),
        ("NROLINNEXT" , "N" , 18),
        ("DDLDML" , "C" , 3),
        ("ENTITY" , "C" , 15),
        ("OP" , "C" , 15),
        ("DONE" , "C" , 1),
        ("NAME" , "C" , 15),
        ("TYPE" , "C" , 15),
        ("VALUEC" , "C" , 255),
        ("VALUEC2" , "C" , 255),
        ("VALUED" , "D" , 8),
        ("VALUEN" , "N" , 18, 5),
        ("VALUEN2" , "N" , 18, 5),
        ("GORN" , "N" , 18),
       )
def cargar_tabla_driver(comandos):    
    for com in comandos:
        rec = db.newRecord()
        for fieldkey in com:
            if fieldkey=="type__":
                rec["type"] = com[fieldkey]
            else:
                rec[fieldkey] = com[fieldkey]
        rec.store()
def cerrar_tabla_driver():
    db.close()
def comando_fase_intermedia(lineready=None,nrolin=None,nrolinnext=None,ddldml=None,entity=None,op=None,done=None,name=None,type__=None,valuec=None,valuec2=None,valued=None,valuen=None,valuen2=None,gorn=None):
    comando={}
    comando["LINEREADY"]="F"
    comando["NROLIN"]=nrolin
    comando["NROLINNEXT"]=nrolinnext
    comando["DDLDML"]=ddldml
    comando["ENTITY"]=entity
    comando["OP"]=op
    comando["DONE"]=done
    comando["NAME"]=name
    comando["TYPE"]=type_
    comando["VALUEC"]=valuec
    comando["VALUEC2"]=valuec2
    comando["VALUED"]=valued
    comando["VALUEN"]=valuen
    comando["VALUEN2"]=valuen2
    comando["GORN"]=gorn
    return comando
def comando_fase_intermedia():
    return {"CREATE":fase_intermedia_CREATE,
            "READ":fase_intermedia_READ,
            "UPDATE":fase_intermedia_UPDATE,
            "DELETE":fase_intermedia_DELETE,
            "SETINDEX":fase_intermedia_SETINDEX,
            "CREATEINDEX":fase_intermedia_CREATEINDEX,
            "UPDATEINDEX":fase_intermedia_UPDATEINDEX,
            "SETORDER":fase_intermedia_SETORDER,
            "NOORDER":fase_intermedia_NOORDER,
            "TELLORDER":fase_intermedia_TELLORDER,
            "SELECTAREA":fase_intermedia_SELECTAREA,
            "SELECTTABLE":fase_intermedia_SELECTTABLE,
            "USEEXCLUSIVE":fase_intermedia_USEEXCLUSIVE,
            "USESHARED":fase_intermedia_USESHARED,
            "GO":fase_intermedia_GO,
            "SEEK":fase_intermedia_SEEK,
            "SEARCH":fase_intermedia_SEARCH,
            "EOFP":fase_intermedia_EOFP,
            "RECNO":fase_intermedia_RECNO,
            "RECCOUNT":fase_intermedia_RECCOUNT,
            "SKIP":fase_intermedia_SKIP,
            "CREATETABLE":fase_intermedia_CREATETABLE,
            "GETFIELDS":fase_intermedia_GETFIELDS,
            "SLEEP":fase_intermedia_SLEEP,
            "CONCATSTRING":fase_intermedia_CONCATSTRING,
            "QUIT":fase_intermedia_QUIT}
nrolin=0
def fase_intermedia_CREATE(field,type__,value):
    nrolin+=1
    nrolinnext=0
    ddldml="DML"
    entity="FIELD"
    op="C"
    comando_fase_intermedia(
        nrolin=None,
        nrolinnext=None,
        ddldml=None,
        entity=None,
        op=None,
        done=None,
        name=field,
        type__=type__,
        valuec=value,
        valuec2=None,
        valued=None,
        valuen=None,
        valuen2=None,
        gorn=None)

if __name__=='__main__':
    pass
