/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337034
 * Mangled: _ZN5Caver5Proto14SpellComponentD0Ev
 * Demangled: Caver::Proto::SpellComponent::~SpellComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003370BC  Caver::Proto::SpellComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000337040 string=0x0000000000337044 ""
 *   insn=0x0000000000337048 string=0x000000000033704C "A"
 *   insn=0x000000000033704C string=0x0000000000337050 "h"
 *   insn=0x0000000000337050 string=0x0000000000337054 "h"
 *   insn=0x0000000000337054 string=0x0000000000337058 "]C"
 *   insn=0x0000000000337058 string=0x000000000033705C ""
 *   insn=0x0000000000337064 string=0x0000000000337068 "`\n@"
 *   insn=0x000000000033706C string=0x0000000000337070 ""
 *   insn=0x0000000000337070 string=0x0000000000337074 ""
 *   insn=0x000000000033707C string=0x0000000000337080 "`"
 *   insn=0x0000000000337080 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000337090 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000337098 string=0x000000000033709C "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpellComponent::~SpellComponent(Caver::Proto::SpellComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9AE0;
  if ( (Caver::Proto::SpellComponent *)Caver::Proto::SpellComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

