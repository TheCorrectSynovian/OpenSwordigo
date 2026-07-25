/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295E40
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent7PrepareEv
 * Demangled: Caver::ChargingMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCB00  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FF140  Caver::MonsterControllerComponent::Prepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 119
 *   insn=0x0000000000295E54 string=0x0000000000295E58 "U"
 *   insn=0x0000000000295E70 string=0x0000000000295E74 "h~@"
 *   insn=0x0000000000295E70 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000295E7C string=0x0000000000295E80 "`"
 *   insn=0x0000000000295E7C string=0x0000000000295E94 "\t"
 *   insn=0x0000000000295E88 string=0x0000000000295E8C "h~@"
 *   insn=0x0000000000295E88 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000295E94 string=0x0000000000295E98 ")"
 *   insn=0x0000000000295E9C string=0x0000000000295EA0 " "
 *   insn=0x0000000000295EA8 string=0x0000000000295EAC "@"
 *   insn=0x0000000000295EA8 string=0x0000000000295EB8 "`"
 *   insn=0x0000000000295EAC string=0x0000000000295EB0 ""
 *   insn=0x0000000000295EB0 string=0x0000000000295EB4 ""
 *   insn=0x0000000000295EBC string=0x0000000000295EC0 "`"
 *   insn=0x0000000000295EBC string=0x0000000000295EEC ""
 *   insn=0x0000000000295ECC string=0x0000000000295ED0 "`"
 *   insn=0x0000000000295ED8 string=0x0000000000295EDC ""
 *   insn=0x0000000000295EE0 string=0x0000000000295EE4 "`"
 *   insn=0x0000000000295EF0 string=0x0000000000295EF4 ""
 *   insn=0x0000000000295F00 string=0x0000000000295F04 "@"
 *   insn=0x0000000000295F04 string=0x0000000000295F08 ""
 *   insn=0x0000000000295F08 string=0x0000000000295F0C ""
 *   insn=0x0000000000295F10 string=0x0000000000295F14 "h"
 *   insn=0x0000000000295F14 string=0x0000000000295F18 "5D"
 *   insn=0x0000000000295F30 string=0x00000000001FCB00 "0'"
 *   insn=0x0000000000295F34 string=0x0000000000295F38 ""
 *   insn=0x0000000000295F3C string=0x0000000000295F40 "`"
 *   insn=0x0000000000295F40 string=0x0000000000295F44 "t"
 *   insn=0x0000000000295F44 string=0x0000000000295F48 " "
 *   insn=0x0000000000295F48 string=0x0000000000295F4C "@"
 *   insn=0x0000000000295F4C string=0x0000000000295F50 ""
 *   insn=0x0000000000295F50 string=0x0000000000295F54 ""
 *   insn=0x0000000000295F58 string=0x0000000000295F5C ""
 *   insn=0x0000000000295F5C string=0x0000000000295F60 ""
 *   insn=0x0000000000295F6C string=0x0000000000295F70 " "
 *   insn=0x0000000000295F70 string=0x0000000000295F74 "@"
 *   insn=0x0000000000295F74 string=0x0000000000295F78 ""
 *   insn=0x0000000000295F78 string=0x0000000000295F7C ""
 *   insn=0x0000000000295F80 string=0x0000000000295F84 ""
 *   insn=0x0000000000295F84 string=0x0000000000295F88 ""
 *   insn=0x0000000000295F98 string=0x0000000000295F9C "@"
 *   insn=0x0000000000295F9C string=0x0000000000295FA0 ""
 *   insn=0x0000000000295FA0 string=0x0000000000295FA4 ""
 *   insn=0x0000000000295FA8 string=0x0000000000295FAC ""
 *   insn=0x0000000000295FAC string=0x0000000000295FB0 ""
 *   insn=0x0000000000295FBC string=0x0000000000295FC0 "hr@"
 *   insn=0x0000000000295FC8 string=0x0000000000295FCC "`B"
 *   insn=0x0000000000295FC8 string=0x0000000000295FE0 "\t"
 *   insn=0x0000000000295FD4 string=0x0000000000295FD8 "hr@"
 *   insn=0x0000000000295FD8 string=0x0000000000295FDC "h"
 *   insn=0x0000000000295FE0 string=0x0000000000295FE4 ")"
 *   insn=0x0000000000295FE8 string=0x0000000000295FEC " "
 *   insn=0x0000000000295FF4 string=0x0000000000295FF8 "@"
 *   insn=0x0000000000295FF4 string=0x000000000029600C "h"
 *   insn=0x0000000000295FF8 string=0x0000000000295FFC ""
 *   insn=0x0000000000295FFC string=0x0000000000296000 ""
 *   insn=0x0000000000296014 string=0x0000000000296018 "\t\t@"
 *   insn=0x0000000000296018 string=0x000000000029601C ")"
 *   insn=0x000000000029601C string=0x0000000000296020 "\t\t"
 *   insn=0x0000000000296040 string=0x0000000000296044 ""
 *   insn=0x0000000000296048 string=0x000000000029604C "`"
 *   insn=0x000000000029604C string=0x0000000000296050 "t"
 *   insn=0x0000000000296050 string=0x0000000000296054 " "
 *   insn=0x0000000000296054 string=0x0000000000296058 "@"
 *   insn=0x0000000000296058 string=0x000000000029605C ""
 *   insn=0x000000000029605C string=0x0000000000296060 ""
 *   insn=0x0000000000296064 string=0x0000000000296068 ""
 *   insn=0x0000000000296068 string=0x000000000029606C ""
 *   insn=0x000000000029607C string=0x0000000000296080 "@"
 *   insn=0x0000000000296080 string=0x0000000000296084 ""
 *   insn=0x0000000000296084 string=0x0000000000296088 ""
 *   insn=0x000000000029608C string=0x0000000000296090 ""
 *   insn=0x0000000000296090 string=0x0000000000296094 ""
 *   insn=0x00000000002960A0 string=0x00000000002960A4 "@"
 *   insn=0x00000000002960A4 string=0x00000000002960A8 ""
 *   insn=0x00000000002960A8 string=0x00000000002960AC ""
 *   insn=0x00000000002960B0 string=0x00000000002960B4 ""
 *   insn=0x00000000002960B4 string=0x00000000002960B8 ""
 *   insn=0x00000000002960CC string=0x00000000002960E8 "z"
 *   insn=0x00000000002960E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002960FC string=0x0000000000296100 "1"
 *   insn=0x00000000002960FC string=0x000000000029613C "@"
 *   insn=0x0000000000296100 string=0x00000000002961C4 "v"
 *   insn=0x000000000029610C string=0x0000000000296110 "("
 *   insn=0x0000000000296110 string=0x0000000000296114 "\t\t@"
 *   insn=0x0000000000296114 string=0x0000000000296118 ")"
 *   insn=0x0000000000296118 string=0x000000000029611C "\t\t"
 *   insn=0x0000000000296120 string=0x0000000000296124 "\t"
 *   insn=0x0000000000296124 string=0x0000000000296128 ")"
 *   insn=0x000000000029612C string=0x0000000000296130 " "
 *   insn=0x0000000000296134 string=0x0000000000296138 "`"
 *   insn=0x000000000029613C string=0x0000000000296140 ""
 *   insn=0x0000000000296140 string=0x0000000000296144 ""
 *   insn=0x0000000000296148 string=0x000000000029614C ""
 *   insn=0x000000000029614C string=0x0000000000296150 ""
 *   insn=0x0000000000296154 string=0x0000000000296158 ""
 *   insn=0x000000000029616C string=0x0000000000296170 "\t\t@"
 *   insn=0x0000000000296170 string=0x0000000000296174 ")"
 *   insn=0x0000000000296174 string=0x0000000000296178 "\t\t"
 *   insn=0x0000000000296178 string=0x000000000029617C "!"
 *   insn=0x000000000029617C string=0x0000000000296180 "\t"
 *   insn=0x0000000000296180 string=0x0000000000296184 ")"
 *   insn=0x0000000000296188 string=0x000000000029618C " "
 *   insn=0x00000000002961A4 string=0x00000000002961A8 "@"
 *   insn=0x00000000002961A8 string=0x00000000002961AC ""
 *   insn=0x00000000002961AC string=0x00000000002961B0 ""
 *   insn=0x00000000002961B4 string=0x00000000002961B8 ""
 *   insn=0x00000000002961B8 string=0x00000000002961BC ""
 *   insn=0x00000000002961C8 string=0x00000000002961CC "9"
 *   insn=0x00000000002961CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002961D4 string=0x00000000002961D8 "]"
 *   insn=0x00000000002961E8 string=0x00000000002961EC "hJA"
 *   insn=0x00000000002961F4 string=0x00000000002961F8 "`"
 *   insn=0x00000000002961F8 string=0x00000000002961FC "`B@"
 *   insn=0x00000000002961FC string=0x0000000000296200 "tJ"
 *   insn=0x0000000000296204 string=0x0000000000296208 "`"
 *   insn=0x000000000029620C string=0x0000000000296210 "4"
 *   insn=0x0000000000296210 string=0x0000000000296214 "`B@"
 *   insn=0x000000000029621C string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ChargingMonsterControllerComponent::Prepare(Caver::ChargingMonsterControllerComponent *this)
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
  _DWORD *v16; // x8
  _DWORD *v17; // x0
  int v18; // w8
  int v19; // w8
  _DWORD *result; // x0
  int v21; // w8
  _DWORD *v22; // [xsp+28h] [xbp-48h]
  _DWORD *v23; // [xsp+28h] [xbp-48h]
  _DWORD *v24; // [xsp+30h] [xbp-40h]
  _DWORD *v25; // [xsp+30h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::MonsterControllerComponent::Prepare(this);
  v2 = operator new(0x30u);
  v3 = *((_QWORD *)this + 31);
  v4 = v2;
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 232), this),
        (v3 = *((_QWORD *)this + 31)) != 0) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3);
    v24 = (_DWORD *)v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = *((_QWORD *)this + 34);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v24 = 0;
    v6 = *((_QWORD *)this + 34);
    if ( v6 )
      goto LABEL_9;
  }
  Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 256), this);
  v6 = *((_QWORD *)this + 34);
  if ( !v6 )
  {
    v22 = 0;
    goto LABEL_11;
  }
LABEL_9:
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
  v22 = (_DWORD *)v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
LABEL_11:
  Caver::AnimBlendNode::AnimBlendNode();
  ++*(_DWORD *)(v4 + 8);
  v8 = (_DWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v4;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v22 )
  {
    v10 = v22[2] - 1;
    v22[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  if ( v24 )
  {
    v11 = v24[2] - 1;
    v24[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 8LL))(v24);
  }
  v12 = operator new(0x30u);
  v13 = *((_QWORD *)this + 28);
  v14 = v12;
  if ( v13
    || (Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 208), this),
        (v13 = *((_QWORD *)this + 28)) != 0) )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 264LL))(v13);
    v25 = (_DWORD *)v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
  }
  else
  {
    v25 = 0;
  }
  v16 = (_DWORD *)*((_QWORD *)this + 36);
  v23 = v16;
  if ( v16 )
    ++v16[2];
  Caver::AnimBlendNode::AnimBlendNode();
  ++*(_DWORD *)(v14 + 8);
  v17 = (_DWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v14;
  if ( v17 )
  {
    v18 = v17[2] - 1;
    v17[2] = v18;
    if ( !v18 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  if ( v23 )
  {
    v19 = v23[2] - 1;
    v23[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  result = v25;
  if ( v25 )
  {
    v21 = v25[2] - 1;
    v25[2] = v21;
    if ( !v21 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 8LL))(v25);
  }
  return result;
}

