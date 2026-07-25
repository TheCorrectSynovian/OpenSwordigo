/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF72C
 * Mangled: _ZN5Caver19SimpleGlowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SimpleGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64B0  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 19
 *   insn=0x00000000002AF73C string=0x00000000002AF740 "U"
 *   insn=0x00000000002AF750 string=0x00000000002AF754 "W"
 *   insn=0x00000000002AF754 string=0x00000000001F64B0 "0'"
 *   insn=0x00000000002AF758 string=0x00000000002AF75C "aC"
 *   insn=0x00000000002AF784 string=0x00000000002AF788 "("
 *   insn=0x00000000002AF790 string=0x00000000002AF794 "?*"
 *   insn=0x00000000002AF794 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002AF798 string=0x00000000002AF79C "`B"
 *   insn=0x00000000002AF7A0 string=0x00000000002AF7A4 "hB"
 *   insn=0x00000000002AF7A8 string=0x00000000002AF7AC "h"
 *   insn=0x00000000002AF7B8 string=0x00000000002AF7BC "("
 *   insn=0x00000000002AF7BC string=0x00000000002AF7C0 ""
 *   insn=0x00000000002AF7C0 string=0x00000000002AF7C4 ""
 *   insn=0x00000000002AF7C4 string=0x00000000002AF7C8 "h"
 *   insn=0x00000000002AF7CC string=0x00000000002AF7D0 "h"
 *   insn=0x00000000002AF7D0 string=0x00000000002AF7DC "h"
 *   insn=0x00000000002AF7D4 string=0x00000000002AF7D8 "i"
 *   insn=0x00000000002AF7E0 string=0x00000000002AF7E4 "h"
 *   insn=0x00000000002AF80C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::SimpleGlowComponent::LoadFromProtobufMessage(
        Caver::SimpleGlowComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  const Caver::Proto::FloatColor *v5; // x1
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 *result; // x0
  __int64 v9; // x8
  int v10; // w8
  __int128 v11; // [xsp+8h] [xbp-38h] BYREF
  __int64 v12; // [xsp+18h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::SimpleGlowComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E95E0);
  v6 = Message;
  if ( *(_QWORD *)(Message + 16) )
    v7 = Message;
  else
    v7 = Caver::Proto::SimpleGlowComponent::default_instance_;
  result = Caver::FloatColorFromProtobufMessage((__int64 *)&v11, *(Caver **)(v7 + 16), v5);
  *(_OWORD *)((char *)this + 164) = v11;
  *(_QWORD *)((char *)this + 180) = *(_QWORD *)(v6 + 24);
  *((_DWORD *)this + 49) = *(_DWORD *)(v6 + 32);
  if ( *(_QWORD *)(v6 + 40) )
    v9 = v6;
  else
    v9 = Caver::Proto::SimpleGlowComponent::default_instance_;
  *(_QWORD *)((char *)this + 188) = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 12LL);
  v10 = *(_DWORD *)(v6 + 56);
  if ( (v10 & 0x20) != 0 )
    *((_DWORD *)this + 51) = *(_DWORD *)(v6 + 48);
  if ( (v10 & 0x40) != 0 )
    *((_DWORD *)this + 52) = *(_DWORD *)(v6 + 52);
  return result;
}

