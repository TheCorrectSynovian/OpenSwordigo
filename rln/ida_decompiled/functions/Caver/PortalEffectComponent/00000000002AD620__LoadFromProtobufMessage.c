/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD620
 * Mangled: _ZN5Caver21PortalEffectComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PortalEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64B0  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 32
 *   insn=0x00000000002AD630 string=0x00000000002AD634 "U"
 *   insn=0x00000000002AD648 string=0x00000000001F64B0 "0'"
 *   insn=0x00000000002AD64C string=0x00000000002AD650 ""
 *   insn=0x00000000002AD668 string=0x00000000002AD66C "i"
 *   insn=0x00000000002AD66C string=0x00000000002AD670 "?"
 *   insn=0x00000000002AD674 string=0x00000000002AD678 "`N@"
 *   insn=0x00000000002AD678 string=0x00000000002AD67C "h"
 *   insn=0x00000000002AD684 string=0x00000000002AD688 "@"
 *   insn=0x00000000002AD688 string=0x00000000002AD68C ""
 *   insn=0x00000000002AD68C string=0x00000000002AD690 ""
 *   insn=0x00000000002AD694 string=0x00000000002AD698 ""
 *   insn=0x00000000002AD698 string=0x00000000002AD69C ""
 *   insn=0x00000000002AD6A4 string=0x00000000002AD6A8 "i"
 *   insn=0x00000000002AD6A8 string=0x00000000002AD6AC "?"
 *   insn=0x00000000002AD6B0 string=0x00000000002AD6B4 "`Z@"
 *   insn=0x00000000002AD6B4 string=0x00000000002AD6B8 "h"
 *   insn=0x00000000002AD6C0 string=0x00000000002AD6C4 "@"
 *   insn=0x00000000002AD6C4 string=0x00000000002AD6C8 ""
 *   insn=0x00000000002AD6C8 string=0x00000000002AD6CC ""
 *   insn=0x00000000002AD6D0 string=0x00000000002AD6D4 ""
 *   insn=0x00000000002AD6D4 string=0x00000000002AD6D8 ""
 *   insn=0x00000000002AD6F0 string=0x00000000002AD6F4 "("
 *   insn=0x00000000002AD6FC string=0x00000000002AD700 "d2"
 *   insn=0x00000000002AD700 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002AD704 string=0x00000000002AD708 "`"
 *   insn=0x00000000002AD714 string=0x00000000002AD718 "("
 *   insn=0x00000000002AD718 string=0x00000000002AD71C ""
 *   insn=0x00000000002AD71C string=0x00000000002AD720 "\t"
 *   insn=0x00000000002AD720 string=0x00000000002AD724 ""
 *   insn=0x00000000002AD724 string=0x00000000002AD728 "if"
 *   insn=0x00000000002AD728 string=0x00000000002AD72C "h"
 *   insn=0x00000000002AD754 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::PortalEffectComponent::LoadFromProtobufMessage(
        Caver::PortalEffectComponent *this,
        const Caver::Proto::Component *a2)
{
  const Caver::Proto::FloatColor *v4; // x1
  __int64 Message; // x20
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  int v9; // w8
  _DWORD *v10; // x0
  int v11; // w8
  __int64 v12; // x8
  __int64 *result; // x0
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x9
  __int128 v17; // [xsp+8h] [xbp-38h] BYREF
  __int64 v18; // [xsp+18h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::PortalEffectComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9800);
  v6 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 36) != v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v6;
    *((_QWORD *)this + 19) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v9 = *(_DWORD *)(Message + 16);
  if ( *((_DWORD *)this + 42) != v9 )
  {
    v10 = (_DWORD *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 42) = v9;
    *((_QWORD *)this + 22) = 0;
    if ( v10 )
    {
      v11 = v10[2] - 1;
      v10[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( *(_QWORD *)(Message + 24) )
    v12 = Message;
  else
    v12 = Caver::Proto::PortalEffectComponent::default_instance_;
  result = Caver::FloatColorFromProtobufMessage((__int64 *)&v17, *(Caver **)(v12 + 24), v4);
  *(_OWORD *)((char *)this + 184) = v17;
  if ( *(_QWORD *)(Message + 32) )
    v14 = Message;
  else
    v14 = Caver::Proto::PortalEffectComponent::default_instance_;
  v15 = *(_QWORD *)(v14 + 32);
  v16 = *(_QWORD *)(v15 + 12);
  LODWORD(v15) = *(_DWORD *)(v15 + 20);
  *((_QWORD *)this + 25) = v16;
  *((_DWORD *)this + 52) = v15;
  return result;
}

