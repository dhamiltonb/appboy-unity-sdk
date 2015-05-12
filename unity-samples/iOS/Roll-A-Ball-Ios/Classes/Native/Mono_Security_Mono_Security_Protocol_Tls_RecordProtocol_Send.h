﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.Exception
struct Exception_t82;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1472;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1456;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1475  : public Object_t
{
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	Object_t * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t487 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	Object_t * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t82 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t1472 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t1456 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;
};