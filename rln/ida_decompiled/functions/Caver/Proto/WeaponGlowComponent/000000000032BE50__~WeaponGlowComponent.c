/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BE50
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponentD0Ev
 * Demangled: Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000032BEEC  Caver::Proto::WeaponGlowComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000032BE5C string=0x000000000032BE60 ""
 *   insn=0x000000000032BE64 string=0x000000000032BE68 "A"
 *   insn=0x000000000032BE68 string=0x000000000032BE6C "h"
 *   insn=0x000000000032BE70 string=0x000000000032BE74 "MC"
 *   insn=0x000000000032BE74 string=0x000000000032BE78 ""
 *   insn=0x000000000032BE7C string=0x000000000032BE80 "`"
 *   insn=0x000000000032BE80 string=0x000000000032BE84 "`\n@"
 *   insn=0x000000000032BE88 string=0x000000000032BE8C ""
 *   insn=0x000000000032BE88 string=0x000000000032BE98 "`"
 *   insn=0x000000000032BE8C string=0x000000000032BE90 ""
 *   insn=0x000000000032BE9C string=0x000000000032BEA0 ""
 *   insn=0x000000000032BEA0 string=0x000000000032BEA4 ""
 *   insn=0x000000000032BEB0 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032BEC0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032BEE4 string=0x000000000032BEE8 "wV\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent(Caver::Proto::WeaponGlowComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C9270;
  if ( (Caver::Proto::WeaponGlowComponent *)Caver::Proto::WeaponGlowComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

