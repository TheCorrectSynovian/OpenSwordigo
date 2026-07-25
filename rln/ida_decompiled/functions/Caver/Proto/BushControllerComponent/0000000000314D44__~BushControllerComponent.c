/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314D44
 * Mangled: _ZN5Caver5Proto23BushControllerComponentD0Ev
 * Demangled: Caver::Proto::BushControllerComponent::~BushControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000314D8C  Caver::Proto::BushControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000314D50 string=0x0000000000314D54 "IF"
 *   insn=0x0000000000314D58 string=0x0000000000314D5C "A"
 *   insn=0x0000000000314D5C string=0x0000000000314D60 "h"
 *   insn=0x0000000000314D60 string=0x0000000000314D64 "'"
 *   insn=0x0000000000314D64 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000314D70 string=0x0000000000314D74 "O"
 *   insn=0x0000000000314D74 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000314D7C string=0x0000000000314D80 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BushControllerComponent::~BushControllerComponent(
        Caver::Proto::BushControllerComponent *this)
{
  *(_QWORD *)this = off_6C8028;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

