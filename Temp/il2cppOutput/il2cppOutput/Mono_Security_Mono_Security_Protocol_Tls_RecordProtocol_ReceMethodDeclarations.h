#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t794;
// System.IO.Stream
struct Stream_t793;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t273;
// System.Threading.WaitHandle
struct WaitHandle_t845;
// System.AsyncCallback
struct AsyncCallback_t142;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3835 (ReceiveRecordAsyncResult_t794 * __this, AsyncCallback_t142 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t408* ___initialBuffer, Stream_t793 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t793 * ReceiveRecordAsyncResult_get_Record_m3836 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t408* ReceiveRecordAsyncResult_get_ResultingBuffer_m3837 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t408* ReceiveRecordAsyncResult_get_InitialBuffer_m3838 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3839 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t273 * ReceiveRecordAsyncResult_get_AsyncException_m3840 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3841 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t845 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3842 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3843 (ReceiveRecordAsyncResult_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3844 (ReceiveRecordAsyncResult_t794 * __this, Exception_t273 * ___ex, ByteU5BU5D_t408* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3845 (ReceiveRecordAsyncResult_t794 * __this, Exception_t273 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3846 (ReceiveRecordAsyncResult_t794 * __this, ByteU5BU5D_t408* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
