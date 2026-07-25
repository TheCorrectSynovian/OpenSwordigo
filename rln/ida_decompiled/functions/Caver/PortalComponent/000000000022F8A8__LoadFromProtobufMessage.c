/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F8A8
 * Mangled: _ZN5Caver15PortalComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PortalComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 17
 *   insn=0x000000000022F8BC string=0x00000000001FA840 "0'"
 *   insn=0x000000000022F8C0 string=0x000000000022F8C4 "mA"
 *   insn=0x000000000022F8D0 string=0x000000000022F8D4 "/="
 *   insn=0x000000000022F8DC string=0x000000000022F8E0 "iz@"
 *   insn=0x000000000022F8E0 string=0x000000000022F8E4 "?"
 *   insn=0x000000000022F8E8 string=0x000000000022F8EC "`B@"
 *   insn=0x000000000022F8EC string=0x000000000022F8F0 "hz"
 *   insn=0x000000000022F8F8 string=0x000000000022F8FC "@"
 *   insn=0x000000000022F8FC string=0x000000000022F900 ""
 *   insn=0x000000000022F900 string=0x000000000022F904 ""
 *   insn=0x000000000022F908 string=0x000000000022F90C ""
 *   insn=0x000000000022F90C string=0x000000000022F910 ""
 *   insn=0x000000000022F918 string=0x000000000022F91C "`""
 *   insn=0x000000000022F91C string=0x000000000022F920 "b"
 *   insn=0x000000000022F924 string=0x000000000022F928 "`B"
 *   insn=0x000000000022F928 string=0x000000000022F92C "_"
 *   insn=0x000000000022F930 string=0x000000000022F934 "hb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalComponent::LoadFromProtobufMessage(
        Caver::PortalComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  __int64 result; // x0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::PortalComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9760);
  v5 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 30) != v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v5;
    *((_QWORD *)this + 16) = 0;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  sub_56A6A8((char *)this + 136);
  result = sub_56A6A8((char *)this + 144);
  *((_BYTE *)this + 152) = *(_BYTE *)(Message + 32);
  return result;
}

