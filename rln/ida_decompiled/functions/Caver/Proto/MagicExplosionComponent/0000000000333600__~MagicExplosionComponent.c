/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333600
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponentD0Ev
 * Demangled: Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000333688  Caver::Proto::MagicExplosionComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000033360C string=0x0000000000333610 "YD"
 *   insn=0x0000000000333614 string=0x0000000000333618 "A"
 *   insn=0x0000000000333618 string=0x000000000033361C "h"
 *   insn=0x0000000000333620 string=0x0000000000333624 "G"
 *   insn=0x0000000000333624 string=0x0000000000333628 ""
 *   insn=0x0000000000333630 string=0x0000000000333634 "`\n@"
 *   insn=0x0000000000333638 string=0x000000000033363C ""
 *   insn=0x000000000033363C string=0x0000000000333640 ""
 *   insn=0x000000000033364C string=0x00000000001F7600 "0'"
 *   insn=0x000000000033365C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000333678 string=0x000000000033367C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent(
        Caver::Proto::MagicExplosionComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9798;
  if ( (Caver::Proto::MagicExplosionComponent *)Caver::Proto::MagicExplosionComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

