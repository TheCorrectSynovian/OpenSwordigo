/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336598
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponentD0Ev
 * Demangled: Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000336620  Caver::Proto::MagicHookshotComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000003365A4 string=0x00000000003365A8 "yF"
 *   insn=0x00000000003365AC string=0x00000000003365B0 "A"
 *   insn=0x00000000003365B0 string=0x00000000003365B4 "h"
 *   insn=0x00000000003365B8 string=0x00000000003365BC ""
 *   insn=0x00000000003365BC string=0x00000000003365C0 ""
 *   insn=0x00000000003365C8 string=0x00000000003365CC "`"
 *   insn=0x00000000003365D0 string=0x00000000003365D4 ""
 *   insn=0x00000000003365D4 string=0x00000000003365D8 ""
 *   insn=0x00000000003365E0 string=0x00000000003365E4 ""
 *   insn=0x00000000003365E4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003365F0 string=0x00000000003365F4 "/"
 *   insn=0x00000000003365F4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000336610 string=0x0000000000336614 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent(
        Caver::Proto::MagicHookshotComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9A68;
  if ( (Caver::Proto::MagicHookshotComponent *)Caver::Proto::MagicHookshotComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 4);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

