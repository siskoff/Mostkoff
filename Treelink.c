/*
 * Harbour 3.2.0dev (r1704200801)
 * LLVM/Clang C 3.3.1 (35465.f352ad3.17344af) (64-bit)
 * Generated C source from "h:\source\clases\Treelink.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TTREELINK );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TTREELINK_NEW );
HB_FUNC_STATIC( TTREELINK_ADDATHEAD );
HB_FUNC_STATIC( TTREELINK_ADDATTAIL );
HB_FUNC_STATIC( TTREELINK_ADDAFTER );
HB_FUNC_STATIC( TTREELINK_ADDFIRSTCHILD );
HB_FUNC_STATIC( TTREELINK_ADDLASTCHILD );
HB_FUNC_STATIC( TTREELINK_KILL );
HB_FUNC_STATIC( TTREELINK_ISLASTCHILD );
HB_FUNC_STATIC( TTREELINK_ISFIRSTCHILD );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TVITEM );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TREELINK )
{ "TTREELINK", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREELINK_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_NEW )}, NULL },
{ "TTREELINK_ADDATHEAD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ADDATHEAD )}, NULL },
{ "TTREELINK_ADDATTAIL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ADDATTAIL )}, NULL },
{ "TTREELINK_ADDAFTER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ADDAFTER )}, NULL },
{ "TTREELINK_ADDFIRSTCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ADDFIRSTCHILD )}, NULL },
{ "TTREELINK_ADDLASTCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ADDLASTCHILD )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IBMPOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TREEITEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IBMPCLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREELINK_KILL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_KILL )}, NULL },
{ "_INDENTLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INDENTLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PARENTLINK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIRSTCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREELINK_ISLASTCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ISLASTCHILD )}, NULL },
{ "TTREELINK_ISFIRSTCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TTREELINK_ISFIRSTCHILD )}, NULL },
{ "LOPENED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LOPENED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_TREEWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PARENTLINK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FIRSTCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LASTCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PREVSIBLING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NEXTSIBLING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TVITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TVITEM )}, NULL },
{ "TREEWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_TREEITEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PREVSIBLING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEXTSIBLING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISROOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TREELINK, "h:\\source\\clases\\Treelink.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TREELINK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TREELINK )
   #include "hbiniseg.h"
#endif

HB_FUNC( TTREELINK )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,46,0,36,5,0,103,2,0,100,8,
		29,29,4,176,1,0,104,2,0,12,1,29,18,4,
		166,212,3,0,122,80,1,48,2,0,176,3,0,12,
		0,106,10,84,84,114,101,101,76,105,110,107,0,108,
		4,4,1,0,108,0,112,3,80,2,36,7,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,8,84,114,101,101,87,110,100,0,4,1,0,9,
		112,5,73,36,8,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,11,80,97,114,101,110,
		116,76,105,110,107,0,4,1,0,9,112,5,73,36,
		9,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,11,70,105,114,115,116,67,104,105,108,
		100,0,106,10,76,97,115,116,67,104,105,108,100,0,
		4,2,0,9,112,5,73,36,10,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,12,78,
		101,120,116,83,105,98,108,105,110,103,0,106,12,80,
		114,101,118,83,105,98,108,105,110,103,0,4,2,0,
		9,112,5,73,36,11,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,8,108,79,112,101,
		110,101,100,0,106,12,73,110,100,101,110,116,76,101,
		118,101,108,0,4,2,0,9,112,5,73,36,12,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,9,84,114,101,101,73,116,101,109,0,4,1,
		0,9,112,5,73,36,14,0,48,6,0,95,2,106,
		4,78,101,119,0,108,7,95,1,92,8,72,121,72,
		121,72,112,3,73,36,16,0,48,6,0,95,2,106,
		10,65,100,100,65,116,72,101,97,100,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,17,0,48,
		6,0,95,2,106,10,65,100,100,65,116,84,97,105,
		108,0,108,9,95,1,121,72,121,72,121,72,112,3,
		73,36,18,0,48,6,0,95,2,106,9,65,100,100,
		65,102,116,101,114,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,19,0,48,6,0,95,2,106,
		14,65,100,100,70,105,114,115,116,67,104,105,108,100,
		0,108,11,95,1,121,72,121,72,121,72,112,3,73,
		36,20,0,48,6,0,95,2,106,13,65,100,100,76,
		97,115,116,67,104,105,108,100,0,108,12,95,1,121,
		72,121,72,121,72,112,3,73,36,22,0,48,13,0,
		95,2,106,10,71,101,116,66,105,116,109,97,112,0,
		89,35,0,1,0,0,0,48,14,0,48,15,0,95,
		1,112,0,112,0,48,16,0,48,15,0,95,1,112,
		0,112,0,4,2,0,6,95,1,121,72,121,72,121,
		72,112,3,73,36,24,0,48,6,0,95,2,106,5,
		75,105,108,108,0,108,17,95,1,121,72,121,72,121,
		72,112,3,73,36,26,0,48,13,0,95,2,106,10,
		83,101,116,73,110,100,101,110,116,0,89,17,0,2,
		0,0,0,48,18,0,95,1,95,2,112,1,6,95,
		1,121,72,121,72,121,72,112,3,73,36,27,0,48,
		13,0,95,2,106,10,71,101,116,73,110,100,101,110,
		116,0,89,15,0,1,0,0,0,48,19,0,95,1,
		112,0,6,95,1,121,72,121,72,121,72,112,3,73,
		36,29,0,48,13,0,95,2,106,7,73,115,82,111,
		111,116,0,89,17,0,1,0,0,0,48,20,0,95,
		1,112,0,100,8,6,95,1,121,72,121,72,121,72,
		112,3,73,36,30,0,48,13,0,95,2,106,9,73,
		115,80,97,114,101,110,116,0,89,30,0,1,0,0,
		0,48,21,0,95,1,112,0,100,69,21,28,12,73,
		48,22,0,95,1,112,0,100,69,6,95,1,121,72,
		121,72,121,72,112,3,73,36,31,0,48,6,0,95,
		2,106,12,73,115,76,97,115,116,67,104,105,108,100,
		0,108,23,95,1,121,72,121,72,121,72,112,3,73,
		36,32,0,48,6,0,95,2,106,13,73,115,70,105,
		114,115,116,67,104,105,108,100,0,108,24,95,1,121,
		72,121,72,121,72,112,3,73,36,33,0,48,13,0,
		95,2,106,9,73,115,79,112,101,110,101,100,0,89,
		15,0,1,0,0,0,48,25,0,95,1,112,0,6,
		95,1,121,72,121,72,121,72,112,3,73,36,34,0,
		48,13,0,95,2,106,13,84,111,103,103,108,101,79,
		112,101,110,101,100,0,89,28,0,1,0,0,0,48,
		26,0,95,1,48,25,0,95,1,112,0,28,5,9,
		25,3,120,112,1,6,95,1,121,72,121,72,121,72,
		112,3,73,36,36,0,48,27,0,95,2,112,0,73,
		167,14,0,0,176,28,0,104,2,0,95,2,20,2,
		168,48,29,0,95,2,112,0,80,3,176,30,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,31,0,95,3,164,146,1,0,73,95,
		3,110,7,48,29,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,40,0,95,2,100,8,28,5,9,80,
		2,36,42,0,48,32,0,102,95,1,112,1,73,36,
		43,0,48,26,0,102,95,2,112,1,73,36,44,0,
		48,33,0,102,100,112,1,73,36,45,0,48,34,0,
		102,100,112,1,73,36,46,0,48,35,0,102,100,112,
		1,73,36,47,0,48,36,0,102,100,112,1,73,36,
		48,0,48,37,0,102,100,112,1,73,36,49,0,48,
		18,0,102,121,112,1,73,36,51,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ADDATHEAD )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,36,57,0,48,2,0,176,38,0,12,0,
		95,1,95,2,95,3,112,3,80,4,36,58,0,48,
		2,0,176,0,0,12,0,48,39,0,102,112,0,112,
		1,80,5,36,60,0,48,40,0,95,5,95,4,112,
		1,73,36,61,0,48,33,0,95,5,48,20,0,102,
		112,0,112,1,73,36,63,0,48,20,0,102,112,0,
		100,69,28,20,36,64,0,48,21,0,48,20,0,102,
		112,0,112,0,80,6,25,36,36,66,0,102,80,6,
		36,67,0,48,41,0,95,6,112,0,100,69,28,16,
		36,68,0,48,41,0,95,6,112,0,80,6,25,230,
		36,72,0,48,37,0,95,5,95,6,112,1,73,36,
		73,0,48,36,0,95,6,95,5,112,1,73,36,75,
		0,48,20,0,102,112,0,100,69,28,19,36,76,0,
		48,34,0,48,20,0,102,112,0,95,5,112,1,73,
		36,79,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ADDATTAIL )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,36,85,0,48,2,0,176,38,0,12,0,
		95,1,95,2,95,3,112,3,80,4,36,86,0,48,
		2,0,176,0,0,12,0,48,39,0,102,112,0,112,
		1,80,5,36,88,0,48,40,0,95,5,95,4,112,
		1,73,36,89,0,48,33,0,95,5,48,20,0,102,
		112,0,112,1,73,36,91,0,48,20,0,102,112,0,
		100,69,28,20,36,92,0,48,22,0,48,20,0,102,
		112,0,112,0,80,6,25,36,36,94,0,102,80,6,
		36,95,0,48,42,0,95,6,112,0,100,69,28,16,
		36,96,0,48,42,0,95,6,112,0,80,6,25,230,
		36,100,0,48,36,0,95,5,95,6,112,1,73,36,
		101,0,48,37,0,95,6,95,5,112,1,73,36,103,
		0,48,20,0,102,112,0,100,69,28,19,36,104,0,
		48,35,0,48,20,0,102,112,0,95,5,112,1,73,
		36,107,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ADDAFTER )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,113,0,48,2,0,176,38,0,12,0,
		95,1,95,2,95,3,112,3,80,4,36,114,0,48,
		2,0,176,0,0,12,0,48,39,0,102,112,0,112,
		1,80,5,36,116,0,48,40,0,95,5,95,4,112,
		1,73,36,117,0,48,33,0,95,5,48,20,0,102,
		112,0,112,1,73,36,119,0,48,20,0,102,112,0,
		100,69,28,34,48,22,0,48,20,0,102,112,0,112,
		0,102,8,28,19,36,120,0,48,35,0,48,20,0,
		102,112,0,95,5,112,1,73,36,123,0,48,36,0,
		95,5,102,112,1,73,36,124,0,48,37,0,95,5,
		48,42,0,102,112,0,112,1,73,36,125,0,48,42,
		0,102,112,0,100,69,28,19,36,126,0,48,36,0,
		48,42,0,102,112,0,95,5,112,1,73,36,128,0,
		48,37,0,102,95,5,112,1,73,36,130,0,95,5,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ADDFIRSTCHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,136,0,48,2,0,176,38,0,12,0,
		95,1,95,2,95,3,112,3,80,4,36,137,0,48,
		2,0,176,0,0,12,0,48,39,0,102,112,0,112,
		1,80,5,36,139,0,48,40,0,95,5,95,4,112,
		1,73,36,140,0,48,33,0,95,5,102,112,1,73,
		36,142,0,48,21,0,102,112,0,100,69,28,19,36,
		143,0,48,36,0,48,21,0,102,112,0,95,5,112,
		1,73,36,146,0,48,37,0,95,5,48,21,0,102,
		112,0,112,1,73,36,148,0,48,34,0,102,95,5,
		112,1,73,36,149,0,48,22,0,102,112,0,100,8,
		28,14,36,150,0,48,35,0,102,95,5,112,1,73,
		36,153,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ADDLASTCHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,159,0,48,2,0,176,38,0,12,0,
		95,1,95,2,95,3,112,3,80,4,36,160,0,48,
		2,0,176,0,0,12,0,48,39,0,102,112,0,112,
		1,80,5,36,162,0,48,40,0,95,5,95,4,112,
		1,73,36,163,0,48,33,0,95,5,102,112,1,73,
		36,165,0,48,22,0,102,112,0,100,69,28,19,36,
		166,0,48,37,0,48,22,0,102,112,0,95,5,112,
		1,73,36,169,0,48,36,0,95,5,48,22,0,102,
		112,0,112,1,73,36,171,0,48,35,0,102,95,5,
		112,1,73,36,172,0,48,21,0,102,112,0,100,8,
		28,14,36,173,0,48,34,0,102,95,5,112,1,73,
		36,176,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ISLASTCHILD )
{
	static const HB_BYTE pcode[] =
	{
		36,180,0,48,20,0,102,112,0,100,8,28,8,36,
		181,0,9,110,7,36,184,0,48,22,0,48,20,0,
		102,112,0,112,0,102,8,28,8,36,185,0,120,110,
		7,36,188,0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_ISFIRSTCHILD )
{
	static const HB_BYTE pcode[] =
	{
		36,192,0,48,20,0,102,112,0,100,8,28,8,36,
		193,0,9,110,7,36,196,0,48,21,0,48,20,0,
		102,112,0,112,0,102,8,28,8,36,197,0,120,110,
		7,36,200,0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TTREELINK_KILL )
{
	static const HB_BYTE pcode[] =
	{
		36,205,0,48,43,0,102,112,0,28,8,36,206,0,
		9,110,7,36,210,0,48,41,0,102,112,0,100,8,
		28,45,48,42,0,102,112,0,100,8,28,35,36,211,
		0,48,34,0,48,20,0,102,112,0,48,35,0,48,
		20,0,102,112,0,100,112,1,112,1,73,36,212,0,
		120,110,7,36,216,0,48,41,0,102,112,0,100,69,
		28,55,48,42,0,102,112,0,100,8,28,45,36,217,
		0,48,35,0,48,20,0,102,112,0,48,41,0,102,
		112,0,112,1,73,36,218,0,48,37,0,48,41,0,
		102,112,0,100,112,1,73,36,219,0,120,110,7,36,
		223,0,48,41,0,102,112,0,100,8,28,55,48,42,
		0,102,112,0,100,69,28,45,36,224,0,48,34,0,
		48,20,0,102,112,0,48,42,0,102,112,0,112,1,
		73,36,225,0,48,36,0,48,42,0,102,112,0,100,
		112,1,73,36,226,0,120,110,7,36,230,0,48,36,
		0,48,42,0,102,112,0,48,41,0,102,112,0,112,
		1,73,36,231,0,48,37,0,48,41,0,102,112,0,
		48,42,0,102,112,0,112,1,73,36,233,0,120,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,46,0,2,0,116,46,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

