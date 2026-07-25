/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289460
 * Mangled: _ZN5Caver22MagicHookshotComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicHookshotComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 47
 *   insn=0x0000000000289470 string=0x0000000000289474 "U"
 *   insn=0x0000000000289488 string=0x00000000001FC2D0 "0'"
 *   insn=0x000000000028948C string=0x0000000000289490 ""
 *   insn=0x000000000028949C string=0x00000000002894A0 "<"
 *   insn=0x00000000002894A8 string=0x00000000002894AC "i"
 *   insn=0x00000000002894AC string=0x00000000002894B0 "?"
 *   insn=0x00000000002894B4 string=0x00000000002894B8 "`j@"
 *   insn=0x00000000002894B8 string=0x00000000002894BC "h"
 *   insn=0x00000000002894C4 string=0x00000000002894C8 "@"
 *   insn=0x00000000002894C8 string=0x00000000002894CC ""
 *   insn=0x00000000002894CC string=0x00000000002894D0 ""
 *   insn=0x00000000002894D4 string=0x00000000002894D8 ""
 *   insn=0x00000000002894D8 string=0x00000000002894DC ""
 *   insn=0x00000000002894E4 string=0x00000000002894E8 "i"
 *   insn=0x00000000002894E8 string=0x00000000002894EC "?"
 *   insn=0x00000000002894F0 string=0x00000000002894F4 "`v@"
 *   insn=0x00000000002894F4 string=0x00000000002894F8 "h"
 *   insn=0x0000000000289500 string=0x0000000000289504 "@"
 *   insn=0x0000000000289504 string=0x0000000000289508 ""
 *   insn=0x0000000000289508 string=0x000000000028950C ""
 *   insn=0x0000000000289510 string=0x0000000000289514 ""
 *   insn=0x0000000000289514 string=0x0000000000289518 ""
 *   insn=0x0000000000289520 string=0x0000000000289524 "i"
 *   insn=0x0000000000289524 string=0x0000000000289528 "?"
 *   insn=0x000000000028952C string=0x0000000000289530 "`"
 *   insn=0x0000000000289530 string=0x0000000000289534 "h"
 *   insn=0x000000000028953C string=0x0000000000289540 "@"
 *   insn=0x0000000000289540 string=0x0000000000289544 ""
 *   insn=0x0000000000289544 string=0x0000000000289548 ""
 *   insn=0x000000000028954C string=0x0000000000289550 ""
 *   insn=0x0000000000289550 string=0x0000000000289554 ""
 *   insn=0x000000000028955C string=0x0000000000289560 "i"
 *   insn=0x0000000000289560 string=0x0000000000289564 "?"
 *   insn=0x0000000000289568 string=0x000000000028956C "`"
 *   insn=0x000000000028956C string=0x0000000000289570 "h"
 *   insn=0x0000000000289578 string=0x000000000028957C "@"
 *   insn=0x000000000028957C string=0x0000000000289580 ""
 *   insn=0x0000000000289580 string=0x0000000000289584 ""
 *   insn=0x0000000000289588 string=0x000000000028958C ""
 *   insn=0x000000000028958C string=0x0000000000289590 ""
 *   insn=0x00000000002895A4 string=0x00000000002895A8 ")"
 *   insn=0x00000000002895AC string=0x00000000002895B0 ")"
 *   insn=0x00000000002895B0 string=0x00000000002895B4 "("
 *   insn=0x00000000002895C0 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002895C4 string=0x00000000002895C8 "h"
 *   insn=0x00000000002895DC string=0x00000000002895F4 "7"
 *   insn=0x00000000002895F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicHookshotComponent::LoadFromProtobufMessage(
        Caver::MagicHookshotComponent *this,
        const Caver::Proto::Component *a2)
{
  const Caver::Proto::FloatColor *v4; // x1
  __int64 Message; // x20
  long double result; // q0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  int v13; // w8
  _DWORD *v14; // x0
  int v15; // w8
  int v16; // w8
  _DWORD *v17; // x0
  int v18; // w8
  __int64 v19; // x8
  long double v20; // [xsp+8h] [xbp-38h] BYREF
  __int64 v21; // [xsp+18h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::MagicHookshotComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9888);
  v7 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 50) != v7 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 26);
    *((_DWORD *)this + 50) = v7;
    *((_QWORD *)this + 26) = 0;
    if ( v8 )
    {
      v9 = v8[2] - 1;
      v8[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v10 = *(_DWORD *)(Message + 16);
  if ( *((_DWORD *)this + 56) != v10 )
  {
    v11 = (_DWORD *)*((_QWORD *)this + 29);
    *((_DWORD *)this + 56) = v10;
    *((_QWORD *)this + 29) = 0;
    if ( v11 )
    {
      v12 = v11[2] - 1;
      v11[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v13 = *(_DWORD *)(Message + 20);
  if ( *((_DWORD *)this + 62) != v13 )
  {
    v14 = (_DWORD *)*((_QWORD *)this + 32);
    *((_DWORD *)this + 62) = v13;
    *((_QWORD *)this + 32) = 0;
    if ( v14 )
    {
      v15 = v14[2] - 1;
      v14[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v16 = *(_DWORD *)(Message + 24);
  if ( *((_DWORD *)this + 68) != v16 )
  {
    v17 = (_DWORD *)*((_QWORD *)this + 35);
    *((_DWORD *)this + 68) = v16;
    *((_QWORD *)this + 35) = 0;
    if ( v17 )
    {
      v18 = v17[2] - 1;
      v17[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  if ( (*(_BYTE *)(Message + 40) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(Message + 32) )
      v19 = Message;
    else
      v19 = Caver::Proto::MagicHookshotComponent::default_instance_;
    Caver::FloatColorFromProtobufMessage((__int64 *)&v20, *(Caver **)(v19 + 32), v4);
    result = v20;
    *(long double *)((char *)this + 296) = v20;
  }
  return result;
}

