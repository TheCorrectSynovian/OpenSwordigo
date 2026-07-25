/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003314E0
 * Mangled: _ZN5Caver5Proto20OverlayTextComponentD0Ev
 * Demangled: Caver::Proto::OverlayTextComponent::~OverlayTextComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3E60  Caver::Proto::OverlayTextComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003314EC string=0x00000000003314F0 ""
 *   insn=0x00000000003314F4 string=0x00000000003314F8 "A"
 *   insn=0x00000000003314F8 string=0x00000000003314FC "h"
 *   insn=0x00000000003314FC string=0x0000000000331500 "X\n"
 *   insn=0x0000000000331500 string=0x00000000001F3E60 "P'"
 *   insn=0x0000000000331504 string=0x0000000000331508 ">"
 *   insn=0x0000000000331508 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000331514 string=0x0000000000331518 "f"
 *   insn=0x0000000000331518 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000331528 string=0x000000000033152C "5"
 *   insn=0x0000000000331530 string=0x0000000000331534 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OverlayTextComponent::~OverlayTextComponent(Caver::Proto::OverlayTextComponent *this)
{
  *(_QWORD *)this = off_6C9630;
  Caver::Proto::OverlayTextComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

