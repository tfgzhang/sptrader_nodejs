#include <node.h>
#include "macromagic.h"

//def NODE_MODULE_NAME for node_addon.h:
#define NODE_MODULE_NAME SpTrader
#define NODE_MODULE_FUNC_LIST \
	on\
,SPAPI_Initialize\
,SPAPI_GetDllVersion\
,SPAPI_GetLoginStatus\
,SPAPI_SetLoginInfo\
,SPAPI_Login\
,SPAPI_GetAccInfo\
,SPAPI_LoadInstrumentList\
,SPAPI_GetInstrumentCount\
,SPAPI_GetInstrument\
,SPAPI_LoadProductInfoListByCode\
,SPAPI_GetProduct

#include "node_addon.h"

//always cleanup
#undef NODE_MODULE_FUNC_LIST
#undef NODE_MODULE_NAME
