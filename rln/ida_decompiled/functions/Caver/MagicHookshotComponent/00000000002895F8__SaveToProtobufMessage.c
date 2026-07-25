/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002895F8
 * Mangled: _ZNK5Caver22MagicHookshotComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA2E0  Caver::Proto::MagicHookshotComponent::default_instance(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002896D0  Caver::MagicHookshotComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x0000000000289610 string=0x00000000001F4E00 "P'"
 *   insn=0x0000000000289614 string=0x0000000000289618 ""
 *   insn=0x0000000000289620 string=0x0000000000289624 "/"
 *   insn=0x0000000000289624 string=0x00000000001FA2E0 "0'"
 *   insn=0x0000000000289628 string=0x000000000028962C "b"
 *   insn=0x000000000028963C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000289644 string=0x0000000000289648 "i"
 *   insn=0x000000000028964C string=0x0000000000289650 "\n"
 *   insn=0x0000000000289658 string=0x000000000028965C "i"
 *   insn=0x000000000028965C string=0x0000000000289660 "\n"
 *   insn=0x0000000000289664 string=0x0000000000289668 "\n\t"
 *   insn=0x000000000028966C string=0x0000000000289670 "i"
 *   insn=0x0000000000289674 string=0x0000000000289678 ""
 *   insn=0x000000000028967C string=0x0000000000289680 "i"
 *   insn=0x000000000028968C string=0x00000000002896A4 "`"
 *   insn=0x0000000000289694 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000289698 string=0x000000000028969C "!"
 *   insn=0x000000000028969C string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002896B4 string=0x00000000002896B8 "z"
 *   insn=0x00000000002896C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002896C8 string=0x00000000002896CC "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicHookshotComponent::SaveToProtobufMessage(
        Caver::MagicHookshotComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MagicHookshotComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9
  int v9; // w9
  int v10; // w9

  v3 = (Caver::Proto::MagicHookshotComponent *)Caver::SpellComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::MagicHookshotComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 40);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 32);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 50);
  *(_DWORD *)(v5 + 40) = v6 | 1;
  v8 = *((_DWORD *)this + 56);
  *(_DWORD *)(v5 + 40) = v6 | 3;
  *(_DWORD *)(v5 + 16) = v8;
  v9 = *((_DWORD *)this + 62);
  *(_DWORD *)(v5 + 40) = v6 | 7;
  *(_DWORD *)(v5 + 20) = v9;
  v10 = *((_DWORD *)this + 68);
  *(_DWORD *)(v5 + 40) = v6 | 0x1F;
  *(_DWORD *)(v5 + 24) = v10;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 32) = v7;
  }
  return Caver::FloatColorToProtobufMessage((Caver::MagicHookshotComponent *)((char *)this + 296), v7, v4);
}

