#ifndef __HYPERWIN_DRVOPS_H_
#define __HYPERWIN_DRVOPS_H_

#include <ntddk.h>

NTSTATUS HyperWinCreate(IN PDEVICE_OBJECT pDeviceObj, IN PIRP Irp);

#endif