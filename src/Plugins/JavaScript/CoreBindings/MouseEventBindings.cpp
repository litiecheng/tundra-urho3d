// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Input/MouseEvent.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Input/InputAPI.h"
#include "Math/Point.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{

static const char* Point_ID = "Point";

static duk_ret_t Point_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<Point>(ctx, Point_ID);
    return 0;
}


static const char* MouseEvent_ID = "MouseEvent";

static duk_ret_t MouseEvent_Set_x(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int x = (int)duk_require_number(ctx, 0);
    thisObj->x = x;
    return 0;
}

static duk_ret_t MouseEvent_Get_x(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->x);
    return 1;
}

static duk_ret_t MouseEvent_Set_y(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int y = (int)duk_require_number(ctx, 0);
    thisObj->y = y;
    return 0;
}

static duk_ret_t MouseEvent_Get_y(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->y);
    return 1;
}

static duk_ret_t MouseEvent_Set_z(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int z = (int)duk_require_number(ctx, 0);
    thisObj->z = z;
    return 0;
}

static duk_ret_t MouseEvent_Get_z(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->z);
    return 1;
}

static duk_ret_t MouseEvent_Set_relativeX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int relativeX = (int)duk_require_number(ctx, 0);
    thisObj->relativeX = relativeX;
    return 0;
}

static duk_ret_t MouseEvent_Get_relativeX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->relativeX);
    return 1;
}

static duk_ret_t MouseEvent_Set_relativeY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int relativeY = (int)duk_require_number(ctx, 0);
    thisObj->relativeY = relativeY;
    return 0;
}

static duk_ret_t MouseEvent_Get_relativeY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->relativeY);
    return 1;
}

static duk_ret_t MouseEvent_Set_relativeZ(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int relativeZ = (int)duk_require_number(ctx, 0);
    thisObj->relativeZ = relativeZ;
    return 0;
}

static duk_ret_t MouseEvent_Get_relativeZ(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->relativeZ);
    return 1;
}

static duk_ret_t MouseEvent_Set_globalX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int globalX = (int)duk_require_number(ctx, 0);
    thisObj->globalX = globalX;
    return 0;
}

static duk_ret_t MouseEvent_Get_globalX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->globalX);
    return 1;
}

static duk_ret_t MouseEvent_Set_globalY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int globalY = (int)duk_require_number(ctx, 0);
    thisObj->globalY = globalY;
    return 0;
}

static duk_ret_t MouseEvent_Get_globalY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->globalY);
    return 1;
}

static duk_ret_t MouseEvent_Set_handled(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool handled = duk_require_boolean(ctx, 0);
    thisObj->handled = handled;
    return 0;
}

static duk_ret_t MouseEvent_Get_handled(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_boolean(ctx, thisObj->handled);
    return 1;
}

static duk_ret_t MouseEvent_Set_timestamp(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    float timestamp = (float)duk_require_number(ctx, 0);
    thisObj->timestamp = timestamp;
    return 0;
}

static duk_ret_t MouseEvent_Get_timestamp(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    duk_push_number(ctx, thisObj->timestamp);
    return 1;
}

static duk_ret_t MouseEvent_X(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->X();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_Y(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->Y();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_Z(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->Z();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_RelativeX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->RelativeX();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_RelativeY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->RelativeY();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_RelativeZ(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->RelativeZ();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_GlobalX(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->GlobalX();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_GlobalY(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int ret = thisObj->GlobalY();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_Timestamp(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    float ret = thisObj->Timestamp();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_Suppress(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    thisObj->Suppress();
    return 0;
}

static duk_ret_t MouseEvent_HadKeyDown_int(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int keyCode = (int)duk_require_number(ctx, 0);
    bool ret = thisObj->HadKeyDown(keyCode);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_MousePressedPos_int(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    int mouseButton = (int)duk_require_number(ctx, 0);
    Point ret = thisObj->MousePressedPos(mouseButton);
    PushValueObjectCopy<Point>(ctx, ret, Point_ID, Point_Finalizer);
    return 1;
}

static duk_ret_t MouseEvent_IsLeftButtonDown(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->IsLeftButtonDown();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_IsMiddleButtonDown(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->IsMiddleButtonDown();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_IsRightButtonDown(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->IsRightButtonDown();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_HasShiftModifier(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->HasShiftModifier();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_HasCtrlModifier(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->HasCtrlModifier();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_HasAltModifier(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->HasAltModifier();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t MouseEvent_HasMetaModifier(duk_context* ctx)
{
    MouseEvent* thisObj = GetThisWeakObject<MouseEvent>(ctx);
    bool ret = thisObj->HasMetaModifier();
    duk_push_boolean(ctx, ret);
    return 1;
}

static const duk_function_list_entry MouseEvent_Functions[] = {
    {"X", MouseEvent_X, 0}
    ,{"Y", MouseEvent_Y, 0}
    ,{"Z", MouseEvent_Z, 0}
    ,{"RelativeX", MouseEvent_RelativeX, 0}
    ,{"RelativeY", MouseEvent_RelativeY, 0}
    ,{"RelativeZ", MouseEvent_RelativeZ, 0}
    ,{"GlobalX", MouseEvent_GlobalX, 0}
    ,{"GlobalY", MouseEvent_GlobalY, 0}
    ,{"Timestamp", MouseEvent_Timestamp, 0}
    ,{"Suppress", MouseEvent_Suppress, 0}
    ,{"HadKeyDown", MouseEvent_HadKeyDown_int, 1}
    ,{"MousePressedPos", MouseEvent_MousePressedPos_int, 1}
    ,{"IsLeftButtonDown", MouseEvent_IsLeftButtonDown, 0}
    ,{"IsMiddleButtonDown", MouseEvent_IsMiddleButtonDown, 0}
    ,{"IsRightButtonDown", MouseEvent_IsRightButtonDown, 0}
    ,{"HasShiftModifier", MouseEvent_HasShiftModifier, 0}
    ,{"HasCtrlModifier", MouseEvent_HasCtrlModifier, 0}
    ,{"HasAltModifier", MouseEvent_HasAltModifier, 0}
    ,{"HasMetaModifier", MouseEvent_HasMetaModifier, 0}
    ,{nullptr, nullptr, 0}
};

void Expose_MouseEvent(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_number(ctx, 0);
    duk_put_prop_string(ctx, -2, "NoButton");
    duk_push_number(ctx, Urho3D::MOUSEB_LEFT);
    duk_put_prop_string(ctx, -2, "LeftButton");
    duk_push_number(ctx, Urho3D::MOUSEB_RIGHT);
    duk_put_prop_string(ctx, -2, "RightButton");
    duk_push_number(ctx, Urho3D::MOUSEB_MIDDLE);
    duk_put_prop_string(ctx, -2, "MiddleButton");
    duk_push_number(ctx, Urho3D::MOUSEB_X1);
    duk_put_prop_string(ctx, -2, "Button4");
    duk_push_number(ctx, Urho3D::MOUSEB_X2);
    duk_put_prop_string(ctx, -2, "Button5");
    duk_push_number(ctx, 32);
    duk_put_prop_string(ctx, -2, "MaxButtonMask");
    duk_push_number(ctx, 0);
    duk_put_prop_string(ctx, -2, "MouseEventInvalid");
    duk_push_number(ctx, 1);
    duk_put_prop_string(ctx, -2, "MouseMove");
    duk_push_number(ctx, 2);
    duk_put_prop_string(ctx, -2, "MouseScroll");
    duk_push_number(ctx, 3);
    duk_put_prop_string(ctx, -2, "MousePressed");
    duk_push_number(ctx, 4);
    duk_put_prop_string(ctx, -2, "MouseReleased");
    duk_push_number(ctx, 5);
    duk_put_prop_string(ctx, -2, "MouseDoubleClicked");
    duk_push_number(ctx, 0);
    duk_put_prop_string(ctx, -2, "PressOriginNone");
    duk_push_number(ctx, 1);
    duk_put_prop_string(ctx, -2, "PressOriginScene");
    duk_push_number(ctx, 2);
    duk_put_prop_string(ctx, -2, "PressOriginQtWidget");
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, MouseEvent_Functions);
    DefineProperty(ctx, "x", MouseEvent_Get_x, MouseEvent_Set_x);
    DefineProperty(ctx, "y", MouseEvent_Get_y, MouseEvent_Set_y);
    DefineProperty(ctx, "z", MouseEvent_Get_z, MouseEvent_Set_z);
    DefineProperty(ctx, "relativeX", MouseEvent_Get_relativeX, MouseEvent_Set_relativeX);
    DefineProperty(ctx, "relativeY", MouseEvent_Get_relativeY, MouseEvent_Set_relativeY);
    DefineProperty(ctx, "relativeZ", MouseEvent_Get_relativeZ, MouseEvent_Set_relativeZ);
    DefineProperty(ctx, "globalX", MouseEvent_Get_globalX, MouseEvent_Set_globalX);
    DefineProperty(ctx, "globalY", MouseEvent_Get_globalY, MouseEvent_Set_globalY);
    DefineProperty(ctx, "handled", MouseEvent_Get_handled, MouseEvent_Set_handled);
    DefineProperty(ctx, "timestamp", MouseEvent_Get_timestamp, MouseEvent_Set_timestamp);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, MouseEvent_ID);
}

}