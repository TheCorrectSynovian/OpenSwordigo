/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473374
 * Mangled: _ZN5Caver11SceneObject14AddChildObjectERKN5boost13intrusive_ptrIS0_EE
 * Demangled: Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 8
 *   0x00000000001F42A0  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F65B0  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F99D0  Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *   0x0000000000200470  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x0000000000473398 string=0x000000000047339C "V"
 *   insn=0x00000000004733A0 string=0x00000000004733A4 "`"
 *   insn=0x00000000004733A8 string=0x00000000004733AC ""
 *   insn=0x00000000004733B0 string=0x00000000004733B4 " "
 *   insn=0x00000000004733C0 string=0x00000000004733C4 "\t"
 *   insn=0x00000000004733C4 string=0x00000000004733C8 ")i@"
 *   insn=0x00000000004733C8 string=0x00000000004733CC " "
 *   insn=0x00000000004733EC string=0x00000000004733F0 ""
 *   insn=0x00000000004733F0 string=0x00000000004733F4 "i@"
 *   insn=0x0000000000473400 string=0x0000000000473404 "I"
 *   insn=0x0000000000473414 string=0x0000000000473418 "f"
 *   insn=0x0000000000473418 string=0x00000000001F65B0 "0'"
 *   insn=0x0000000000473424 string=0x0000000000473428 "`"
 *   insn=0x0000000000473430 string=0x0000000000473434 "k"
 *   insn=0x0000000000473434 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047343C string=0x00000000001F42A0 "P'"
 *   insn=0x0000000000473440 string=0x0000000000473444 ""
 *   insn=0x0000000000473448 string=0x000000000047344C "`"
 *   insn=0x000000000047344C string=0x0000000000473450 "u"
 *   insn=0x0000000000473450 string=0x0000000000473454 " "
 *   insn=0x0000000000473454 string=0x0000000000473458 "@"
 *   insn=0x0000000000473458 string=0x000000000047345C ""
 *   insn=0x000000000047345C string=0x0000000000473460 ""
 *   insn=0x0000000000473464 string=0x0000000000473468 ""
 *   insn=0x0000000000473468 string=0x000000000047346C ""
 *   insn=0x0000000000473470 string=0x0000000000473474 "u"
 *   insn=0x000000000047347C string=0x0000000000473480 "a"
 *   insn=0x0000000000473484 string=0x0000000000473488 "R"
 *   insn=0x0000000000473488 string=0x000000000047348C "`"
 *   insn=0x0000000000473488 string=0x00000000001F99D0 "0'"
 *   insn=0x0000000000473494 string=0x0000000000473498 "`"
 *   insn=0x00000000004734B0 string=0x00000000004734B4 "`"
 *   insn=0x00000000004734B0 string=0x00000000004734CC "i"L"
 *   insn=0x00000000004734B8 string=0x00000000004734BC ""
 *   insn=0x00000000004734BC string=0x00000000004734C0 ""
 *   insn=0x00000000004734CC string=0x00000000004734D0 ""
 *   insn=0x00000000004734D4 string=0x00000000004734D8 " "
 *   insn=0x00000000004734E4 string=0x00000000004734E8 "\t"
 *   insn=0x00000000004734E8 string=0x00000000004734EC ")i@"
 *   insn=0x00000000004734EC string=0x00000000004734F0 " "
 *   insn=0x0000000000473500 string=0x0000000000473504 "hb@"
 *   insn=0x0000000000473510 string=0x0000000000473514 ""
 *   insn=0x0000000000473514 string=0x0000000000473518 "i@"
 *   insn=0x0000000000473524 string=0x0000000000473528 "I"
 *   insn=0x0000000000473548 string=0x000000000047354C "Y"
 *   insn=0x000000000047354C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::AddChildObject(__int64 result, Caver::SceneObject **a2)
{
  Caver::SceneObject *v3; // x21
  __int64 v4; // x19
  __int64 *v5; // x8
  __int64 v6; // x22
  _QWORD *v7; // x9
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  char v10; // w0
  unsigned __int64 v11; // x24
  __int64 v12; // x0
  char v13; // w0
  Caver::SceneObjectGroup *v14; // x0
  __int64 v15; // x21
  _DWORD *v16; // x0
  int v17; // w8
  Caver::SceneObject *v18; // x21
  _QWORD *v19; // x9
  __int64 v20; // x8
  unsigned __int64 v21; // x20
  unsigned __int64 v22; // x22
  __int64 v23; // x0

  v3 = *a2;
  v4 = result;
  v5 = (__int64 *)((char *)*a2 + 48);
  v6 = *v5;
  if ( *v5 )
  {
    if ( v6 == result )
      return result;
    v7 = *(_QWORD **)(v6 + 192);
    v8 = *(_QWORD *)(v6 + 200) - (_QWORD)v7;
    if ( v8 )
    {
      v9 = v8 >> 3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, Caver::SceneObject *))(*(_QWORD *)*v7 + 208LL))(*v7, 4, v3);
      if ( v9 >= 2 && (v10 & 1) == 0 )
      {
        v11 = 1;
        do
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 8 * v11);
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, Caver::SceneObject *))(*(_QWORD *)v12 + 208LL))(v12, 4, v3);
          ++v11;
        }
        while ( v9 > v11 && (v13 & 1) == 0 );
      }
    }
    *((_QWORD *)v3 + 6) = 0;
    Caver::SceneObjectGroup::RemoveObject(*(Caver::SceneObjectGroup **)(v6 + 56), v3);
    v3 = *a2;
    v5 = (__int64 *)((char *)*a2 + 48);
  }
  *v5 = v4;
  v14 = *(Caver::SceneObjectGroup **)(v4 + 56);
  if ( !v14 )
  {
    v15 = operator new(0x50u);
    Caver::SceneObjectGroup::SceneObjectGroup((Caver::SceneObjectGroup *)v15);
    ++*(_DWORD *)(v15 + 8);
    v16 = *(_DWORD **)(v4 + 56);
    *(_QWORD *)(v4 + 56) = v15;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
        v15 = *(_QWORD *)(v4 + 56);
      }
    }
    *(_BYTE *)(v15 + 75) = 1;
    Caver::SceneObjectGroup::SetScene((Caver::SceneObjectGroup *)v15, *(Caver::Scene **)(v4 + 32));
    Caver::SceneObjectGroup::AddObject(*(Caver::SceneObjectGroup **)(v4 + 56), (Caver::SceneObject *)v4);
    v14 = *(Caver::SceneObjectGroup **)(v4 + 56);
    v3 = *a2;
  }
  result = Caver::SceneObjectGroup::AddObject(v14, v3);
  v18 = *a2;
  if ( !*((_QWORD *)*a2 + 4) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(v4 + 32) + 40LL))(
               *(_QWORD *)(v4 + 32),
               a2);
    v18 = *a2;
  }
  v19 = *(_QWORD **)(v4 + 192);
  v20 = *(_QWORD *)(v4 + 200) - (_QWORD)v19;
  if ( v20 )
  {
    v21 = v20 >> 3;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, Caver::SceneObject *))(*(_QWORD *)*v19 + 208LL))(*v19, 3, v18);
    if ( v21 >= 2 && (result & 1) == 0 )
    {
      v22 = 1;
      do
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 8 * v22);
        result = (*(__int64 (__fastcall **)(__int64, __int64, Caver::SceneObject *))(*(_QWORD *)v23 + 208LL))(
                   v23,
                   3,
                   v18);
        ++v22;
      }
      while ( v21 > v22 && (result & 1) == 0 );
    }
  }
  return result;
}

