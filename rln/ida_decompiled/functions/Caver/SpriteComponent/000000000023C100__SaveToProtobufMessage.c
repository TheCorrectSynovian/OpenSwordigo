/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C100
 * Mangled: _ZNK5Caver15SpriteComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SpriteComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7D50  Caver::Proto::SpriteComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 23
 *   insn=0x000000000023C118 string=0x000000000023C11C "H%"
 *   insn=0x000000000023C11C string=0x000000000023C120 "IC"
 *   insn=0x000000000023C120 string=0x000000000023C124 "s""
 *   insn=0x000000000023C128 string=0x000000000023C12C "\t"
 *   insn=0x000000000023C12C string=0x00000000001F7D50 "0'"
 *   insn=0x000000000023C130 string=0x000000000023C134 "b"
 *   insn=0x000000000023C140 string=0x000000000023C144 ""
 *   insn=0x000000000023C144 string=0x00000000001F7570 "0'"
 *   insn=0x000000000023C14C string=0x000000000023C150 ""
 *   insn=0x000000000023C150 string=0x000000000023C154 "h"
 *   insn=0x000000000023C158 string=0x000000000023C15C "H%"
 *   insn=0x000000000023C15C string=0x000000000023C160 "i"
 *   insn=0x000000000023C160 string=0x000000000023C164 "`\n@"
 *   insn=0x000000000023C164 string=0x000000000023C168 ""
 *   insn=0x000000000023C168 string=0x000000000023C16C ")"
 *   insn=0x000000000023C16C string=0x000000000023C170 "i"
 *   insn=0x000000000023C180 string=0x000000000023C184 "H%"
 *   insn=0x000000000023C180 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023C184 string=0x000000000023C188 ""
 *   insn=0x000000000023C188 string=0x000000000023C18C "a"
 *   insn=0x000000000023C18C string=0x000000000023C190 ""
 *   insn=0x000000000023C190 string=0x000000000023C194 "`\n"
 *   insn=0x000000000023C198 string=0x000000000023C19C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpriteComponent::SaveToProtobufMessage(
        Caver::SpriteComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SpriteComponent *v3; // x0
  __int64 result; // x0
  __int64 v5; // x19
  __int64 *v6; // x0

  v3 = (Caver::Proto::SpriteComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SpriteComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result;
  if ( **((_QWORD **)this + 15) )
  {
    v6 = *(__int64 **)(result + 16);
    *(_DWORD *)(v5 + 24) |= 1u;
    if ( v6 == &Caver::Proto::SpriteComponent::_default_texture_name_ )
    {
      v6 = (__int64 *)operator new(8u);
      *v6 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v5 + 16) = v6;
    }
    return sub_56A6A8(v6);
  }
  return result;
}

