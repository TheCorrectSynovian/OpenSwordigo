/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB508
 * Mangled: _ZNK5Caver5Proto9Component3NewEv
 * Demangled: Caver::Proto::Component::New(void)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F99B0  google::protobuf::internal::ExtensionSet::Clear(void)
 *   0x00000000001FDF90  google::protobuf::internal::ExtensionSet::ExtensionSet(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000002FB514 string=0x00000000002FB518 "2"
 *   insn=0x00000000002FB518 string=0x00000000002FB51C "H"
 *   insn=0x00000000002FB518 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FB51C string=0x00000000002FB520 ""
 *   insn=0x00000000002FB524 string=0x00000000002FB528 "A"
 *   insn=0x00000000002FB528 string=0x00000000002FB52C ""
 *   insn=0x00000000002FB530 string=0x00000000001FDF90 "0'"
 *   insn=0x00000000002FB534 string=0x00000000002FB538 "H"
 *   insn=0x00000000002FB538 string=0x00000000002FB53C ""
 *   insn=0x00000000002FB540 string=0x00000000002FB544 "I"
 *   insn=0x00000000002FB544 string=0x00000000002FB548 ")"
 *   insn=0x00000000002FB54C string=0x00000000002FB550 "h""
 *   insn=0x00000000002FB554 string=0x00000000002FB558 "i*"
 *   insn=0x00000000002FB56C string=0x00000000002FB570 "$"
 *   insn=0x00000000002FB570 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FB574 string=0x00000000002FB578 "N"
 *   insn=0x00000000002FB578 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FB580 string=0x00000000002FB584 "rK"
 *   insn=0x00000000002FB594 string=0x00000000002FB598 "`""
 *   insn=0x00000000002FB59C string=0x00000000002FB5A0 "hbA9("
 *   insn=0x00000000002FB59C string=0x00000000001F99B0 "0'"
 *   insn=0x00000000002FB5A0 string=0x00000000002FB5A4 "("
 *   insn=0x00000000002FB5A8 string=0x00000000002FB5AC "I"
 *   insn=0x00000000002FB5AC string=0x00000000002FB5B0 "`"@"
 *   insn=0x00000000002FB5B0 string=0x00000000002FB5B4 ")"
 *   insn=0x00000000002FB5BC string=0x00000000002FB5C0 ""
 *   insn=0x00000000002FB5D0 string=0x00000000002FB5D4 "hZ@"
 *   insn=0x00000000002FB5D8 string=0x00000000002FB5DC "h"
 *   insn=0x00000000002FB5DC string=0x00000000002FB5E0 "H"
 *   insn=0x00000000002FB5E0 string=0x00000000002FB5E4 "`*@"
 *   insn=0x00000000002FB5E4 string=0x00000000002FB5E8 ""
 *   insn=0x00000000002FB5F0 string=0x00000000002FB5F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::New(Caver::Proto::Component *this)
{
  __int64 v1; // x19

  v1 = operator new(0x60u);
  *(_QWORD *)v1 = off_6C7290;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(v1 + 8));
  *(_DWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 64) = &Caver::Proto::Component::_default_class_name_;
  *(_DWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 80) = &Caver::Proto::Component::_default_label_;
  return v1;
}

