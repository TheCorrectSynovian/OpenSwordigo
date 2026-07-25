/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312D78
 * Mangled: _ZN5Caver5Proto23CharControllerComponentD0Ev
 * Demangled: Caver::Proto::CharControllerComponent::~CharControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000312DDC  Caver::Proto::CharControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000312D88 string=0x0000000000312D8C "`&@"
 *   insn=0x0000000000312D8C string=0x0000000000312D90 ""
 *   insn=0x0000000000312D90 string=0x0000000000312D94 "ib"
 *   insn=0x0000000000312D98 string=0x0000000000312D9C "A"
 *   insn=0x0000000000312D9C string=0x0000000000312DA0 "h"
 *   insn=0x0000000000312DA0 string=0x0000000000312DA4 "`"
 *   insn=0x0000000000312DA4 string=0x0000000000312DA8 "@"
 *   insn=0x0000000000312DA8 string=0x0000000000312DAC "m"
 *   insn=0x0000000000312DAC string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000312DB4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000312DC0 string=0x0000000000312DC4 ";"
 *   insn=0x0000000000312DC4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000312DCC string=0x0000000000312DD0 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharControllerComponent::~CharControllerComponent(
        Caver::Proto::CharControllerComponent *this)
{
  char *v2; // x0

  v2 = (char *)*((_QWORD *)this + 9);
  *(_QWORD *)this = off_6C7F38;
  if ( v2 != (char *)this + 88 && v2 )
    operator delete[](v2);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

