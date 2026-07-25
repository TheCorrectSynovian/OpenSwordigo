/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002825C0
 * Mangled: _ZN5Caver19FireBreathComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::FireBreathComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 31
 *   insn=0x00000000002825D0 string=0x00000000002825D4 "U"
 *   insn=0x00000000002825E4 string=0x00000000002825E8 ":"
 *   insn=0x00000000002825E8 string=0x00000000002825EC "(#"
 *   insn=0x00000000002825E8 string=0x00000000001FC2D0 "0'"
 *   insn=0x00000000002825EC string=0x00000000002825F0 "5A"
 *   insn=0x0000000000282608 string=0x000000000028260C "i"
 *   insn=0x000000000028260C string=0x0000000000282610 "?"
 *   insn=0x0000000000282614 string=0x0000000000282618 "`j@"
 *   insn=0x0000000000282618 string=0x000000000028261C "h"
 *   insn=0x0000000000282624 string=0x0000000000282628 "@"
 *   insn=0x0000000000282628 string=0x000000000028262C ""
 *   insn=0x000000000028262C string=0x0000000000282630 ""
 *   insn=0x0000000000282634 string=0x0000000000282638 ""
 *   insn=0x0000000000282638 string=0x000000000028263C ""
 *   insn=0x0000000000282644 string=0x0000000000282648 "i"
 *   insn=0x0000000000282648 string=0x000000000028264C "?"
 *   insn=0x0000000000282650 string=0x0000000000282654 "`v@"
 *   insn=0x0000000000282650 string=0x0000000000282680 ")#"
 *   insn=0x0000000000282654 string=0x0000000000282658 "h"
 *   insn=0x0000000000282660 string=0x0000000000282664 "@"
 *   insn=0x0000000000282664 string=0x0000000000282668 ""
 *   insn=0x0000000000282668 string=0x000000000028266C ""
 *   insn=0x0000000000282670 string=0x0000000000282674 ""
 *   insn=0x0000000000282674 string=0x0000000000282678 ""
 *   insn=0x0000000000282684 string=0x0000000000282688 ")"
 *   insn=0x000000000028268C string=0x0000000000282690 ")"
 *   insn=0x0000000000282690 string=0x0000000000282694 "("
 *   insn=0x000000000028269C string=0x00000000002826A0 "|"
 *   insn=0x00000000002826A0 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002826A4 string=0x00000000002826A8 "`>"
 *   insn=0x00000000002826D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::FireBreathComponent::LoadFromProtobufMessage(
        Caver::FireBreathComponent *this,
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
  long double result; // q0
  long double v14; // [xsp+8h] [xbp-38h] BYREF
  __int64 v15; // [xsp+18h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::FireBreathComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9858);
  v6 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 50) != v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 26);
    *((_DWORD *)this + 50) = v6;
    *((_QWORD *)this + 26) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v9 = *(_DWORD *)(Message + 16);
  if ( *((_DWORD *)this + 56) != v9 )
  {
    v10 = (_DWORD *)*((_QWORD *)this + 29);
    *((_DWORD *)this + 56) = v9;
    *((_QWORD *)this + 29) = 0;
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
    v12 = Caver::Proto::FireBreathComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v14, *(Caver **)(v12 + 24), v4);
  result = v14;
  *((long double *)this + 15) = v14;
  return result;
}

