/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261B10
 * Mangled: _ZNK5Caver24CollectableItemComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FB160  Caver::Proto::CollectableItemComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000261C68  Caver::CollectableItemComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x0000000000261B28 string=0x0000000000261B2C "($"
 *   insn=0x0000000000261B2C string=0x0000000000261B30 "MB"
 *   insn=0x0000000000261B3C string=0x00000000001FB160 "0'"
 *   insn=0x0000000000261B40 string=0x0000000000261B44 "b"
 *   insn=0x0000000000261B54 string=0x0000000000261B58 "ir@"
 *   insn=0x0000000000261B54 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000261B60 string=0x0000000000261B64 "?"
 *   insn=0x0000000000261B68 string=0x0000000000261B6C ""
 *   insn=0x0000000000261B68 string=0x0000000000261B78 "*$"
 *   insn=0x0000000000261B78 string=0x0000000000261B7C "iv@"
 *   insn=0x0000000000261B80 string=0x0000000000261B84 "J5G"
 *   insn=0x0000000000261B84 string=0x0000000000261B88 "u"
 *   insn=0x0000000000261B88 string=0x0000000000261B8C ""
 *   insn=0x0000000000261BA4 string=0x0000000000261BA8 "($"
 *   insn=0x0000000000261BA4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000261BA8 string=0x0000000000261BAC ""
 *   insn=0x0000000000261BAC string=0x0000000000261BB0 "a"
 *   insn=0x0000000000261BB0 string=0x0000000000261BB4 ""
 *   insn=0x0000000000261BC0 string=0x0000000000261BC4 ")$"
 *   insn=0x0000000000261BCC string=0x0000000000261BD0 ")"
 *   insn=0x0000000000261BD0 string=0x0000000000261BD4 "u"
 *   insn=0x0000000000261BD4 string=0x0000000000261BD8 ""
 *   insn=0x0000000000261BE8 string=0x0000000000261BEC "}N"
 *   insn=0x0000000000261BEC string=0x0000000000261BF0 "($"
 *   insn=0x0000000000261BF0 string=0x0000000000261BF4 ""
 *   insn=0x0000000000261BF4 string=0x0000000000261BF8 "a"
 *   insn=0x0000000000261BF8 string=0x0000000000261BFC ""
 *   insn=0x0000000000261C08 string=0x0000000000261C0C "h"B9"
 *   insn=0x0000000000261C18 string=0x0000000000261C1C "("
 *   insn=0x0000000000261C24 string=0x0000000000261C3C "`B"
 *   insn=0x0000000000261C28 string=0x0000000000261C2C "mN"
 *   insn=0x0000000000261C34 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000261C50 string=0x00000000001F8790 "0'"
 *   insn=0x0000000000261C5C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::SaveToProtobufMessage(
        Caver::CollectableItemComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::CollectableItemComponent *v3; // x0
  __int64 v4; // x0
  unsigned int v5; // w9
  __int64 v6; // x20
  int v7; // w8
  __int64 *v8; // x0
  __int64 *v9; // x0
  int v10; // w9
  Caver::Proto::Program *v11; // x21

  v3 = (Caver::Proto::CollectableItemComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::CollectableItemComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *((_DWORD *)this + 28);
  v6 = v4;
  v7 = *(_DWORD *)(v4 + 56);
  if ( v5 <= 5 )
  {
    v7 |= 1u;
    *(_DWORD *)(v4 + 56) = v7;
    *(_DWORD *)(v4 + 12) = v5;
  }
  v8 = *(__int64 **)(v4 + 24);
  *(_DWORD *)(v6 + 16) = *((_DWORD *)this + 29);
  *(_DWORD *)(v6 + 56) = v7 | 6;
  if ( v8 == &Caver::Proto::CollectableItemComponent::_default_item_name_ )
  {
    v8 = (__int64 *)operator new(8u);
    *v8 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v6 + 24) = v8;
  }
  sub_56A6A8(v8);
  v9 = *(__int64 **)(v6 + 32);
  *(_DWORD *)(v6 + 56) |= 8u;
  if ( v9 == &Caver::Proto::CollectableItemComponent::_default_identifier_ )
  {
    v9 = (__int64 *)operator new(8u);
    *v9 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v6 + 32) = v9;
  }
  sub_56A6A8(v9);
  v10 = *(_DWORD *)(v6 + 56);
  v11 = *(Caver::Proto::Program **)(v6 + 48);
  *(_BYTE *)(v6 + 40) = *((_BYTE *)this + 136);
  *(_DWORD *)(v6 + 56) = v10 | 0x30;
  if ( !v11 )
  {
    v11 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v11);
    *(_QWORD *)(v6 + 48) = v11;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::CollectableItemComponent *)((char *)this + 144), v11);
}

