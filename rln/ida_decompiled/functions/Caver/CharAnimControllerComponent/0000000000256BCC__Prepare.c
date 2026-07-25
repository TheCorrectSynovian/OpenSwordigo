/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BCC
 * Mangled: _ZN5Caver27CharAnimControllerComponent7PrepareEv
 * Demangled: Caver::CharAnimControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCB00  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 169
 *   insn=0x0000000000256BE0 string=0x0000000000256BE4 "U"
 *   insn=0x0000000000256BF4 string=0x0000000000256BF8 "zz"
 *   insn=0x0000000000256BF8 string=0x0000000000256BFC "hf@"
 *   insn=0x0000000000256BF8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000256C04 string=0x0000000000256C08 "`"
 *   insn=0x0000000000256C04 string=0x0000000000256C1C "\t"
 *   insn=0x0000000000256C10 string=0x0000000000256C14 "hf@"
 *   insn=0x0000000000256C10 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000256C1C string=0x0000000000256C20 ")"
 *   insn=0x0000000000256C24 string=0x0000000000256C28 " "
 *   insn=0x0000000000256C30 string=0x0000000000256C34 "@"
 *   insn=0x0000000000256C30 string=0x0000000000256C40 "`r@"
 *   insn=0x0000000000256C34 string=0x0000000000256C38 ""
 *   insn=0x0000000000256C38 string=0x0000000000256C3C ""
 *   insn=0x0000000000256C44 string=0x0000000000256C48 "`B"
 *   insn=0x0000000000256C44 string=0x0000000000256C74 ""
 *   insn=0x0000000000256C54 string=0x0000000000256C58 "`r@"
 *   insn=0x0000000000256C60 string=0x0000000000256C64 ""
 *   insn=0x0000000000256C68 string=0x0000000000256C6C "`r@"
 *   insn=0x0000000000256C78 string=0x0000000000256C7C ""
 *   insn=0x0000000000256C88 string=0x0000000000256C8C "@"
 *   insn=0x0000000000256C8C string=0x0000000000256C90 ""
 *   insn=0x0000000000256C90 string=0x0000000000256C94 ""
 *   insn=0x0000000000256C98 string=0x0000000000256C9C "h"
 *   insn=0x0000000000256C9C string=0x0000000000256CA0 "5D"
 *   insn=0x0000000000256CB8 string=0x00000000001FCB00 "0'"
 *   insn=0x0000000000256CBC string=0x0000000000256CC0 ""
 *   insn=0x0000000000256CC4 string=0x0000000000256CC8 "`"
 *   insn=0x0000000000256CC8 string=0x0000000000256CCC "t"
 *   insn=0x0000000000256CCC string=0x0000000000256CD0 " "
 *   insn=0x0000000000256CD0 string=0x0000000000256CD4 "@"
 *   insn=0x0000000000256CD4 string=0x0000000000256CD8 ""
 *   insn=0x0000000000256CD8 string=0x0000000000256CDC ""
 *   insn=0x0000000000256CE0 string=0x0000000000256CE4 ""
 *   insn=0x0000000000256CE4 string=0x0000000000256CE8 ""
 *   insn=0x0000000000256CF4 string=0x0000000000256CF8 " "
 *   insn=0x0000000000256CF8 string=0x0000000000256CFC "@"
 *   insn=0x0000000000256CFC string=0x0000000000256D00 ""
 *   insn=0x0000000000256D00 string=0x0000000000256D04 ""
 *   insn=0x0000000000256D08 string=0x0000000000256D0C ""
 *   insn=0x0000000000256D0C string=0x0000000000256D10 ""
 *   insn=0x0000000000256D20 string=0x0000000000256D24 "@"
 *   insn=0x0000000000256D24 string=0x0000000000256D28 ""
 *   insn=0x0000000000256D28 string=0x0000000000256D2C ""
 *   insn=0x0000000000256D30 string=0x0000000000256D34 ""
 *   insn=0x0000000000256D34 string=0x0000000000256D38 ""
 *   insn=0x0000000000256D40 string=0x0000000000256D44 "'z"
 *   insn=0x0000000000256D44 string=0x0000000000256D48 "h~@"
 *   insn=0x0000000000256D50 string=0x0000000000256D54 "`"
 *   insn=0x0000000000256D50 string=0x0000000000256D68 "\t"
 *   insn=0x0000000000256D58 string=0x0000000000256D5C "a"
 *   insn=0x0000000000256D5C string=0x0000000000256D60 "h~@"
 *   insn=0x0000000000256D68 string=0x0000000000256D6C ")"
 *   insn=0x0000000000256D70 string=0x0000000000256D74 " "
 *   insn=0x0000000000256D7C string=0x0000000000256D80 "@"
 *   insn=0x0000000000256D7C string=0x0000000000256D8C "`"
 *   insn=0x0000000000256D80 string=0x0000000000256D84 ""
 *   insn=0x0000000000256D84 string=0x0000000000256D88 ""
 *   insn=0x0000000000256D90 string=0x0000000000256D94 "`b"
 *   insn=0x0000000000256D90 string=0x0000000000256DC0 ""
 *   insn=0x0000000000256D9C string=0x0000000000256DA0 "P"
 *   insn=0x0000000000256DA0 string=0x0000000000256DA4 "`"
 *   insn=0x0000000000256DAC string=0x0000000000256DB0 ""
 *   insn=0x0000000000256DB4 string=0x0000000000256DB8 "`"
 *   insn=0x0000000000256DC4 string=0x0000000000256DC8 ""
 *   insn=0x0000000000256DD4 string=0x0000000000256DD8 "@"
 *   insn=0x0000000000256DD8 string=0x0000000000256DDC ""
 *   insn=0x0000000000256DDC string=0x0000000000256DE0 ""
 *   insn=0x0000000000256DE8 string=0x0000000000587824 "33"
 *   insn=0x0000000000256DFC string=0x0000000000256E00 "@"
 *   insn=0x0000000000256E04 string=0x0000000000256E08 ""
 *   insn=0x0000000000256E0C string=0x0000000000256E10 "`"
 *   insn=0x0000000000256E10 string=0x0000000000256E14 "t"
 *   insn=0x0000000000256E14 string=0x0000000000256E18 " "
 *   insn=0x0000000000256E18 string=0x0000000000256E1C "@"
 *   insn=0x0000000000256E1C string=0x0000000000256E20 ""
 *   insn=0x0000000000256E20 string=0x0000000000256E24 ""
 *   insn=0x0000000000256E28 string=0x0000000000256E2C ""
 *   insn=0x0000000000256E2C string=0x0000000000256E30 ""
 *   insn=0x0000000000256E3C string=0x0000000000256E40 " "
 *   insn=0x0000000000256E40 string=0x0000000000256E44 "@"
 *   insn=0x0000000000256E44 string=0x0000000000256E48 ""
 *   insn=0x0000000000256E48 string=0x0000000000256E4C ""
 *   insn=0x0000000000256E50 string=0x0000000000256E54 ""
 *   insn=0x0000000000256E54 string=0x0000000000256E58 ""
 *   insn=0x0000000000256E68 string=0x0000000000256E6C "@"
 *   insn=0x0000000000256E6C string=0x0000000000256E70 ""
 *   insn=0x0000000000256E70 string=0x0000000000256E74 ""
 *   insn=0x0000000000256E78 string=0x0000000000256E7C ""
 *   insn=0x0000000000256E7C string=0x0000000000256E80 ""
 *   insn=0x0000000000256E8C string=0x0000000000256E90 "h"
 *   insn=0x0000000000256E9C string=0x0000000000256EA0 "\t\t@"
 *   insn=0x0000000000256E9C string=0x0000000000256EAC "h"
 *   insn=0x0000000000256EA0 string=0x0000000000256EA4 ")"
 *   insn=0x0000000000256EA4 string=0x0000000000256EA8 "\t\t"
 *   insn=0x0000000000256EB4 string=0x0000000000256EB8 "\t\t@"
 *   insn=0x0000000000256EB8 string=0x0000000000256EBC ")"
 *   insn=0x0000000000256EBC string=0x0000000000256EC0 "\t\t"
 *   insn=0x0000000000256ED8 string=0x0000000000256EDC "\t"
 *   insn=0x0000000000256EE0 string=0x0000000000256EE4 ""
 *   insn=0x0000000000256EE8 string=0x0000000000256EEC "`"
 *   insn=0x0000000000256EEC string=0x0000000000256EF0 "t"
 *   insn=0x0000000000256EF0 string=0x0000000000256EF4 " "
 *   insn=0x0000000000256EF4 string=0x0000000000256EF8 "@"
 *   insn=0x0000000000256EF8 string=0x0000000000256EFC ""
 *   insn=0x0000000000256EFC string=0x0000000000256F00 ""
 *   insn=0x0000000000256F04 string=0x0000000000256F08 ""
 *   insn=0x0000000000256F08 string=0x0000000000256F0C ""
 *   insn=0x0000000000256F1C string=0x0000000000256F20 "@"
 *   insn=0x0000000000256F20 string=0x0000000000256F24 ""
 *   insn=0x0000000000256F24 string=0x0000000000256F28 ""
 *   insn=0x0000000000256F2C string=0x0000000000256F30 ""
 *   insn=0x0000000000256F30 string=0x0000000000256F34 ""
 *   insn=0x0000000000256F40 string=0x0000000000256F44 "@"
 *   insn=0x0000000000256F44 string=0x0000000000256F48 ""
 *   insn=0x0000000000256F48 string=0x0000000000256F4C ""
 *   insn=0x0000000000256F50 string=0x0000000000256F54 ""
 *   insn=0x0000000000256F54 string=0x0000000000256F58 ""
 *   insn=0x0000000000256F88 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000256F98 string=0x0000000000256F9C " "
 *   insn=0x0000000000256F9C string=0x0000000000256FA0 "I"
 *   insn=0x0000000000256F9C string=0x0000000000256FE0 "@"
 *   insn=0x0000000000256FA0 string=0x00000000002570C4 "v"
 *   insn=0x0000000000256FA4 string=0x0000000000256FA8 "G"
 *   insn=0x0000000000256FB0 string=0x0000000000256FB4 "("
 *   insn=0x0000000000256FB4 string=0x0000000000256FB8 "\t\t@"
 *   insn=0x0000000000256FB8 string=0x0000000000256FBC ")"
 *   insn=0x0000000000256FBC string=0x0000000000256FC0 "\t\t"
 *   insn=0x0000000000256FC4 string=0x0000000000256FC8 "\t"
 *   insn=0x0000000000256FC8 string=0x0000000000256FCC ")"
 *   insn=0x0000000000256FD0 string=0x0000000000256FD4 " "
 *   insn=0x0000000000256FD8 string=0x0000000000256FDC "@"
 *   insn=0x0000000000256FE0 string=0x0000000000256FE4 ""
 *   insn=0x0000000000256FE4 string=0x0000000000256FE8 ""
 *   insn=0x0000000000256FEC string=0x0000000000256FF0 ""
 *   insn=0x0000000000256FF0 string=0x0000000000256FF4 ""
 *   insn=0x0000000000256FF8 string=0x0000000000256FFC "2"
 *   insn=0x0000000000257004 string=0x0000000000257008 "h"
 *   insn=0x0000000000257008 string=0x000000000025700C "\t\t@"
 *   insn=0x000000000025700C string=0x0000000000257010 ")"
 *   insn=0x0000000000257010 string=0x0000000000257014 "\t\t"
 *   insn=0x0000000000257018 string=0x000000000025701C "\t"
 *   insn=0x000000000025701C string=0x0000000000257020 ")"
 *   insn=0x0000000000257024 string=0x0000000000257028 " "
 *   insn=0x0000000000257030 string=0x0000000000257034 "%"
 *   insn=0x000000000025703C string=0x0000000000257040 ""
 *   insn=0x0000000000257040 string=0x0000000000257044 "\t\t@"
 *   insn=0x0000000000257044 string=0x0000000000257048 ")"
 *   insn=0x0000000000257048 string=0x000000000025704C "\t\t"
 *   insn=0x0000000000257050 string=0x0000000000257054 "\t"
 *   insn=0x0000000000257054 string=0x0000000000257058 ")"
 *   insn=0x000000000025705C string=0x0000000000257060 " "
 *   insn=0x0000000000257074 string=0x0000000000257078 "`"
 *   insn=0x0000000000257078 string=0x000000000025707C "@"
 *   insn=0x000000000025707C string=0x0000000000257080 ""
 *   insn=0x0000000000257080 string=0x0000000000257084 ""
 *   insn=0x0000000000257088 string=0x000000000025708C ""
 *   insn=0x000000000025708C string=0x0000000000257090 ""
 *   insn=0x0000000000257094 string=0x0000000000257098 ""
 *   insn=0x00000000002570A4 string=0x00000000002570A8 "@"
 *   insn=0x00000000002570A8 string=0x00000000002570AC ""
 *   insn=0x00000000002570AC string=0x00000000002570B0 ""
 *   insn=0x00000000002570B4 string=0x00000000002570B8 ""
 *   insn=0x00000000002570B8 string=0x00000000002570BC ""
 *   insn=0x00000000002570C8 string=0x00000000002570CC "y"
 *   insn=0x00000000002570CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002570D8 string=0x00000000002570DC ""
 *   insn=0x00000000002570E4 string=0x00000000002570E8 ""
 *   insn=0x00000000002570F0 string=0x00000000002570F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CharAnimControllerComponent::Prepare(Caver::CharAnimControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  _DWORD *v8; // x0
  int v9; // w8
  int v10; // w8
  int v11; // w8
  __int64 v12; // x0
  __int64 v13; // x8
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  _DWORD *v18; // x0
  int v19; // w8
  int v20; // w8
  int v21; // w8
  __int64 v22; // x0
  _DWORD *v23; // x8
  __int64 v24; // x20
  _DWORD *v25; // x8
  _DWORD *v26; // x0
  int v27; // w8
  int v28; // w8
  _DWORD *result; // x0
  int v30; // w8
  _DWORD *v31; // [xsp+8h] [xbp-48h]
  _DWORD *v32; // [xsp+8h] [xbp-48h]
  _DWORD *v33; // [xsp+8h] [xbp-48h]
  _DWORD *v34; // [xsp+10h] [xbp-40h]
  _DWORD *v35; // [xsp+10h] [xbp-40h]
  _DWORD *v36; // [xsp+10h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = operator new(0x30u);
  v3 = *((_QWORD *)this + 25);
  v4 = v2;
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 184), this),
        (v3 = *((_QWORD *)this + 25)) != 0) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3);
    v34 = (_DWORD *)v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = *((_QWORD *)this + 28);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v34 = 0;
    v6 = *((_QWORD *)this + 28);
    if ( v6 )
      goto LABEL_9;
  }
  Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 208), this);
  v6 = *((_QWORD *)this + 28);
  if ( !v6 )
  {
    v31 = 0;
    goto LABEL_11;
  }
LABEL_9:
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
  v31 = (_DWORD *)v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
LABEL_11:
  Caver::AnimBlendNode::AnimBlendNode();
  ++*(_DWORD *)(v4 + 8);
  v8 = (_DWORD *)*((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = v4;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v31 )
  {
    v10 = v31[2] - 1;
    v31[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 8LL))(v31);
  }
  if ( v34 )
  {
    v11 = v34[2] - 1;
    v34[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 8LL))(v34);
  }
  v12 = operator new(0x30u);
  v13 = *((_QWORD *)this + 31);
  v14 = v12;
  if ( v13
    || (Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 232), this),
        (v13 = *((_QWORD *)this + 31)) != 0) )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 264LL))(v13);
    v35 = (_DWORD *)v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = *((_QWORD *)this + 37);
    if ( v16 )
      goto LABEL_28;
  }
  else
  {
    v35 = 0;
    v16 = *((_QWORD *)this + 37);
    if ( v16 )
      goto LABEL_28;
  }
  Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 280), this);
  v16 = *((_QWORD *)this + 37);
  if ( !v16 )
  {
    v32 = 0;
    goto LABEL_30;
  }
LABEL_28:
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 264LL))(v16);
  v32 = (_DWORD *)v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
LABEL_30:
  Caver::AnimBlendNode::AnimBlendNode();
  ++*(_DWORD *)(v14 + 8);
  v18 = (_DWORD *)*((_QWORD *)this + 42);
  *((_QWORD *)this + 42) = v14;
  if ( v18 )
  {
    v19 = v18[2] - 1;
    v18[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  if ( v32 )
  {
    v20 = v32[2] - 1;
    v32[2] = v20;
    if ( !v20 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 8LL))(v32);
  }
  if ( v35 )
  {
    v21 = v35[2] - 1;
    v35[2] = v21;
    if ( !v21 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 8LL))(v35);
  }
  v22 = operator new(0x30u);
  v23 = (_DWORD *)*((_QWORD *)this + 41);
  v24 = v22;
  v36 = v23;
  if ( v23 )
    ++v23[2];
  v25 = (_DWORD *)*((_QWORD *)this + 42);
  v33 = v25;
  if ( v25 )
    ++v25[2];
  Caver::AnimBlendNode::AnimBlendNode();
  ++*(_DWORD *)(v24 + 8);
  v26 = (_DWORD *)*((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = v24;
  if ( v26 )
  {
    v27 = v26[2] - 1;
    v26[2] = v27;
    if ( !v27 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 8LL))(v26);
  }
  if ( v33 )
  {
    v28 = v33[2] - 1;
    v33[2] = v28;
    if ( !v28 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 8LL))(v33);
  }
  result = v36;
  if ( v36 )
  {
    v30 = v36[2] - 1;
    v36[2] = v30;
    if ( !v30 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 8LL))(v36);
  }
  return result;
}

