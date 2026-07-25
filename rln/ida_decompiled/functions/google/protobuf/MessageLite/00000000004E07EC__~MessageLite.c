/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E07EC
 * Mangled: _ZN6google8protobuf11MessageLiteD0Ev
 * Demangled: google::protobuf::MessageLite::~MessageLite()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E07F0  google::protobuf::MessageLite::InitializationErrorString(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::MessageLite::~MessageLite(google::protobuf::MessageLite *this)
{
  __break(1u);
  google::protobuf::MessageLite::InitializationErrorString(this);
}

