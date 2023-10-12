/*** Autogenerated by WIDL 8.2 from include/windows.system.power.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_system_power_h__
#define __windows_system_power_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <inspectable.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;
#endif /* __cplusplus */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                enum BatteryStatus {
                    BatteryStatus_NotPresent = 0,
                    BatteryStatus_Discharging = 1,
                    BatteryStatus_Idle = 2,
                    BatteryStatus_Charging = 3
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus {
    BatteryStatus_NotPresent = 0,
    BatteryStatus_Discharging = 1,
    BatteryStatus_Idle = 2,
    BatteryStatus_Charging = 3
};
#ifdef WIDL_using_Windows_System_Power
#define BatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus
#endif /* WIDL_using_Windows_System_Power */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_system_power_h__ */
