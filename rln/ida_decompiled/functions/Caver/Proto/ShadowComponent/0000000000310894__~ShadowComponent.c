/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310894
 * Mangled: _ZN5Caver5Proto15ShadowComponentD0Ev
 * Demangled: Caver::Proto::ShadowComponent::~ShadowComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000031091C  Caver::Proto::ShadowComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000003108A0 string=0x00000000003108A4 "MG"
 *   insn=0x00000000003108A8 string=0x00000000003108AC "A"
 *   insn=0x00000000003108AC string=0x00000000003108B0 "h"
 *   insn=0x00000000003108B4 string=0x00000000003108B8 "-A"
 *   insn=0x00000000003108B8 string=0x00000000003108BC ""
 *   insn=0x00000000003108C4 string=0x00000000003108C8 "`"
 *   insn=0x00000000003108CC string=0x00000000003108D0 ""
 *   insn=0x00000000003108D0 string=0x00000000003108D4 ""
 *   insn=0x00000000003108DC string=0x00000000003108E0 "H"
 *   insn=0x00000000003108E0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003108EC string=0x00000000003108F0 "p"
 *   insn=0x00000000003108F0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003108F8 string=0x00000000003108FC "A"
 *   insn=0x000000000031090C string=0x0000000000310910 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShadowComponent::~ShadowComponent(Caver::Proto::ShadowComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C7D58;
  if ( (Caver::Proto::ShadowComponent *)Caver::Proto::ShadowComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

