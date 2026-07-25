/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325A10
 * Mangled: _ZN5Caver5Proto15AttackComponentD0Ev
 * Demangled: Caver::Proto::AttackComponent::~AttackComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000325A98  Caver::Proto::AttackComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000325A18 string=0x0000000000325A1C ""
 *   insn=0x0000000000325A1C string=0x0000000000325A20 "QC"
 *   insn=0x0000000000325A24 string=0x0000000000325A28 "A"
 *   insn=0x0000000000325A28 string=0x0000000000325A2C "h"
 *   insn=0x0000000000325A2C string=0x0000000000325A30 ""
 *   insn=0x0000000000325A30 string=0x0000000000325A34 "iE"
 *   insn=0x0000000000325A34 string=0x0000000000325A38 ""
 *   insn=0x0000000000325A40 string=0x0000000000325A44 "`"
 *   insn=0x0000000000325A48 string=0x0000000000325A4C ""
 *   insn=0x0000000000325A4C string=0x0000000000325A50 ""
 *   insn=0x0000000000325A5C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000325A6C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000325A88 string=0x0000000000325A8C "\tF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AttackComponent::~AttackComponent(Caver::Proto::AttackComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C8CD0;
  if ( (Caver::Proto::AttackComponent *)Caver::Proto::AttackComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 4);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

