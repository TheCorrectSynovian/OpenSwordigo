/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334994
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponentD0Ev
 * Demangled: Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003349DC  Caver::Proto::MagicSpellCastComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000003349A0 string=0x00000000003349A4 "YC"
 *   insn=0x00000000003349A8 string=0x00000000003349AC "A"
 *   insn=0x00000000003349AC string=0x00000000003349B0 "h"
 *   insn=0x00000000003349B4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003349C0 string=0x00000000003349C4 ";\n"
 *   insn=0x00000000003349C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003349CC string=0x00000000003349D0 "8\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent(
        Caver::Proto::MagicSpellCastComponent *this)
{
  *(_QWORD *)this = off_6C9888;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

