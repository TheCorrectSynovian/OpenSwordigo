/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDDFC
 * Mangled: _ZN5Caver5Proto8DateTimeD0Ev
 * Demangled: Caver::Proto::DateTime::~DateTime()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002CDE44  Caver::Proto::DateTime::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002CDE08 string=0x00000000002CDE0C "UF"
 *   insn=0x00000000002CDE10 string=0x00000000002CDE14 "A"
 *   insn=0x00000000002CDE14 string=0x00000000002CDE18 "h"
 *   insn=0x00000000002CDE1C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CDE28 string=0x00000000002CDE2C "!"
 *   insn=0x00000000002CDE2C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DateTime::~DateTime(Caver::Proto::DateTime *this)
{
  *(_QWORD *)this = off_6C5990;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

