/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000290D6C
 * Mangled: _ZN5Caver15AttackComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::AttackComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 46
 *   insn=0x0000000000290D80 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000290D84 string=0x0000000000290D88 ""
 *   insn=0x0000000000290DA0 string=0x0000000000290DA4 "iz@"
 *   insn=0x0000000000290DA4 string=0x0000000000290DA8 "?"
 *   insn=0x0000000000290DAC string=0x0000000000290DB0 "`B@"
 *   insn=0x0000000000290DB0 string=0x0000000000290DB4 "hz"
 *   insn=0x0000000000290DBC string=0x0000000000290DC0 "@"
 *   insn=0x0000000000290DC0 string=0x0000000000290DC4 ""
 *   insn=0x0000000000290DC4 string=0x0000000000290DC8 ""
 *   insn=0x0000000000290DCC string=0x0000000000290DD0 ""
 *   insn=0x0000000000290DD0 string=0x0000000000290DD4 ""
 *   insn=0x0000000000290DDC string=0x0000000000290DE0 "i"
 *   insn=0x0000000000290DE0 string=0x0000000000290DE4 "?"
 *   insn=0x0000000000290DE8 string=0x0000000000290DEC "`N@"
 *   insn=0x0000000000290DEC string=0x0000000000290DF0 "h"
 *   insn=0x0000000000290DF8 string=0x0000000000290DFC "@"
 *   insn=0x0000000000290DFC string=0x0000000000290E00 ""
 *   insn=0x0000000000290E00 string=0x0000000000290E04 ""
 *   insn=0x0000000000290E08 string=0x0000000000290E0C ""
 *   insn=0x0000000000290E0C string=0x0000000000290E10 ""
 *   insn=0x0000000000290E18 string=0x0000000000290E1C "i"
 *   insn=0x0000000000290E1C string=0x0000000000290E20 "?"
 *   insn=0x0000000000290E24 string=0x0000000000290E28 "`Z@"
 *   insn=0x0000000000290E28 string=0x0000000000290E2C "h"
 *   insn=0x0000000000290E34 string=0x0000000000290E38 "@"
 *   insn=0x0000000000290E38 string=0x0000000000290E3C ""
 *   insn=0x0000000000290E3C string=0x0000000000290E40 ""
 *   insn=0x0000000000290E44 string=0x0000000000290E48 ""
 *   insn=0x0000000000290E48 string=0x0000000000290E4C ""
 *   insn=0x0000000000290E54 string=0x0000000000290E58 "i"
 *   insn=0x0000000000290E58 string=0x0000000000290E5C "?"
 *   insn=0x0000000000290E60 string=0x0000000000290E64 "`f@"
 *   insn=0x0000000000290E64 string=0x0000000000290E68 "h"
 *   insn=0x0000000000290E70 string=0x0000000000290E74 "@"
 *   insn=0x0000000000290E74 string=0x0000000000290E78 ""
 *   insn=0x0000000000290E78 string=0x0000000000290E7C ""
 *   insn=0x0000000000290E80 string=0x0000000000290E84 ""
 *   insn=0x0000000000290E84 string=0x0000000000290E88 ""
 *   insn=0x0000000000290E94 string=0x0000000000290E98 ")iE"
 *   insn=0x0000000000290E98 string=0x0000000000290E9C "`B"
 *   insn=0x0000000000290EA0 string=0x0000000000290EA4 ")"
 *   insn=0x0000000000290EA4 string=0x0000000000290EA8 "("
 *   insn=0x0000000000290EB4 string=0x0000000000290EB8 "i"
 *   insn=0x0000000000290EB8 string=0x0000000000290EBC "("
 *   insn=0x0000000000290EC0 string=0x0000000000290EC4 "hR"
 *   insn=0x0000000000290ECC string=0x0000000000290ED0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::AttackComponent::LoadFromProtobufMessage(
        Caver::AttackComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  int v11; // w8
  _DWORD *v12; // x0
  int v13; // w8
  int v14; // w8
  _DWORD *v15; // x0
  int v16; // w8
  __int64 v17; // x8
  long double result; // q0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::AttackComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9660);
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
  v8 = *(_DWORD *)(Message + 16);
  if ( *((_DWORD *)this + 36) != v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v8;
    *((_QWORD *)this + 19) = 0;
    if ( v9 )
    {
      v10 = v9[2] - 1;
      v9[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v11 = *(_DWORD *)(Message + 20);
  if ( *((_DWORD *)this + 42) != v11 )
  {
    v12 = (_DWORD *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 42) = v11;
    *((_QWORD *)this + 22) = 0;
    if ( v12 )
    {
      v13 = v12[2] - 1;
      v12[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v14 = *(_DWORD *)(Message + 24);
  if ( *((_DWORD *)this + 48) != v14 )
  {
    v15 = (_DWORD *)*((_QWORD *)this + 25);
    *((_DWORD *)this + 48) = v14;
    *((_QWORD *)this + 25) = 0;
    if ( v15 )
    {
      v16 = v15[2] - 1;
      v15[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  if ( *(_QWORD *)(Message + 32) )
    v17 = Message;
  else
    v17 = Caver::Proto::AttackComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::AttackComponent *)((char *)this + 208),
    *(const Caver::Proto::Program **)(v17 + 32));
  *(_QWORD *)((char *)this + 260) = *(_QWORD *)(Message + 40);
  result = *(long double *)(Message + 48);
  *(long double *)((char *)this + 276) = result;
  *((_QWORD *)this + 37) = *(_QWORD *)(Message + 64);
  return result;
}

