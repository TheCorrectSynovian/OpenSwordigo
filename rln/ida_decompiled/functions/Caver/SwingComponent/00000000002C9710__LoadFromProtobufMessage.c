/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9710
 * Mangled: _ZN5Caver14SwingComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SwingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 15
 *   insn=0x00000000002C9720 string=0x00000000002C9724 "G"
 *   insn=0x00000000002C9724 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002C9728 string=0x00000000002C972C ""
 *   insn=0x00000000002C9744 string=0x00000000002C9748 "iz@"
 *   insn=0x00000000002C9748 string=0x00000000002C974C "?"
 *   insn=0x00000000002C9750 string=0x00000000002C9754 "`B@"
 *   insn=0x00000000002C9754 string=0x00000000002C9758 "hz"
 *   insn=0x00000000002C9760 string=0x00000000002C9764 "@"
 *   insn=0x00000000002C9764 string=0x00000000002C9768 ""
 *   insn=0x00000000002C9768 string=0x00000000002C976C ""
 *   insn=0x00000000002C9770 string=0x00000000002C9774 ""
 *   insn=0x00000000002C9774 string=0x00000000002C9778 ""
 *   insn=0x00000000002C9780 string=0x00000000002C9784 "hB"
 *   insn=0x00000000002C9788 string=0x00000000002C978C "hF"
 *   insn=0x00000000002C9790 string=0x00000000002C9794 "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SwingComponent::LoadFromProtobufMessage(
        Caver::SwingComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::SwingComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9720);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 16) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *((_BYTE *)this + 144) = *((_BYTE *)v5 + 16);
  *((_BYTE *)this + 145) = *((_BYTE *)v5 + 17);
  *((_QWORD *)this + 17) = *(_QWORD *)(v5 + 5);
  return result;
}

