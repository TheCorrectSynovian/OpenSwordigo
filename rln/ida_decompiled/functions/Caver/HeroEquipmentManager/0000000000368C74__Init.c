/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368C74
 * Mangled: _ZN5Caver20HeroEquipmentManager4InitERKN5boost10shared_ptrINS_9GameStateEEERKNS1_13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::HeroEquipmentManager::Init(boost::shared_ptr<Caver::GameState> const&,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000201BC0  Caver::HeroEquipmentManager::Init(boost::shared_ptr<Caver::GameState> const&,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 35
 *   insn=0x0000000000368C88 string=0x0000000000368C8C "v"
 *   insn=0x0000000000368C9C string=0x0000000000368CD4 "wbC"
 *   insn=0x0000000000368CA8 string=0x0000000000368CAC "@"
 *   insn=0x0000000000368CAC string=0x0000000000368CB0 ""
 *   insn=0x0000000000368CB0 string=0x0000000000368CB4 ""
 *   insn=0x0000000000368CB8 string=0x0000000000368CBC ""
 *   insn=0x0000000000368CBC string=0x0000000000368CC0 ""
 *   insn=0x0000000000368CD4 string=0x0000000000368CD8 "v"
 *   insn=0x0000000000368CE0 string=0x0000000000368D18 "w"
 *   insn=0x0000000000368CEC string=0x0000000000368CF0 "@"
 *   insn=0x0000000000368CF0 string=0x0000000000368CF4 ""
 *   insn=0x0000000000368CF4 string=0x0000000000368CF8 ""
 *   insn=0x0000000000368CFC string=0x0000000000368D00 ""
 *   insn=0x0000000000368D00 string=0x0000000000368D04 ""
 *   insn=0x0000000000368D20 string=0x0000000000368D24 "\n"
 *   insn=0x0000000000368D20 string=0x0000000000368D30 "u"
 *   insn=0x0000000000368D24 string=0x0000000000368D28 "J"
 *   insn=0x0000000000368D28 string=0x0000000000368D2C "\n"
 *   insn=0x0000000000368D30 string=0x0000000000368D34 "i""
 *   insn=0x0000000000368D3C string=0x0000000000368D40 ""
 *   insn=0x0000000000368D44 string=0x0000000000368D48 "!"
 *   insn=0x0000000000368D50 string=0x0000000000368D54 "\t@"
 *   insn=0x0000000000368D5C string=0x0000000000368D60 ""
 *   insn=0x0000000000368D64 string=0x0000000000368D68 " "
 *   insn=0x0000000000368D70 string=0x0000000000368D74 "\t\t@"
 *   insn=0x0000000000368D70 string=0x0000000000368D80 "`\n@"
 *   insn=0x0000000000368D74 string=0x0000000000368D78 ")"
 *   insn=0x0000000000368D78 string=0x0000000000368D7C "\t\t"
 *   insn=0x0000000000368D80 string=0x0000000000368D84 "h\n"
 *   insn=0x0000000000368D88 string=0x0000000000368D8C "@"
 *   insn=0x0000000000368D8C string=0x0000000000368D90 ""
 *   insn=0x0000000000368D90 string=0x0000000000368D94 ""
 *   insn=0x0000000000368D98 string=0x0000000000368DB0 ""
 *   insn=0x0000000000368DC4 string=0x0000000000368DC8 " "
 *   insn=0x0000000000368DD0 string=0x0000000000368DD4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::HeroEquipmentManager::Init(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _DWORD **v4; // x22
  _DWORD **v5; // x23
  _DWORD **v8; // x24
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD **v11; // x23
  _DWORD **v12; // x24
  _DWORD **v13; // x22
  _DWORD *v14; // x0
  int v15; // w8
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  _DWORD *result; // x0
  int v23; // w8

  v4 = (_DWORD **)a1[3];
  v5 = (_DWORD **)a1[4];
  if ( v5 != v4 )
  {
    v8 = (_DWORD **)a1[3];
    do
    {
      v9 = *v8;
      if ( *v8 )
      {
        v10 = v9[2] - 1;
        v9[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      ++v8;
    }
    while ( v5 != v8 );
  }
  v11 = (_DWORD **)a1[6];
  v12 = (_DWORD **)a1[7];
  a1[4] = v4;
  if ( v12 != v11 )
  {
    v13 = v11;
    do
    {
      v14 = *v13;
      if ( *v13 )
      {
        v15 = v14[2] - 1;
        v14[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      ++v13;
    }
    while ( v12 != v13 );
  }
  a1[7] = v11;
  v17 = *a2;
  v16 = a2[1];
  if ( v16 )
    ++*(_QWORD *)(v16 + 8);
  v18 = (_QWORD *)a1[1];
  *a1 = v17;
  a1[1] = v16;
  if ( !v18
    || (v19 = v18[1] - 1LL, (v18[1] = v19) != 0)
    || ((*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18), v20 = v18[2] - 1LL, (v18[2] = v20) != 0) )
  {
    v21 = *a3;
    if ( !*a3 )
      goto LABEL_20;
    goto LABEL_19;
  }
  (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
  v21 = *a3;
  if ( *a3 )
LABEL_19:
    ++*(_DWORD *)(v21 + 8);
LABEL_20:
  result = (_DWORD *)a1[2];
  a1[2] = v21;
  if ( result )
  {
    v23 = result[2] - 1;
    result[2] = v23;
    if ( !v23 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

