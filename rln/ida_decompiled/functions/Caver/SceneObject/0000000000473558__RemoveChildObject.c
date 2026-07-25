/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473558
 * Mangled: _ZN5Caver11SceneObject17RemoveChildObjectEPS0_b
 * Demangled: Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Callers: 2
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 7
 *   0x00000000001F4630  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F65B0  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *   0x00000000001F9020  Caver::SceneObjectLib::PerformCleanupForSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x00000000001FD330  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x000000000047356C string=0x0000000000473570 "V"
 *   insn=0x0000000000473588 string=0x000000000047358C ""
 *   insn=0x0000000000473590 string=0x0000000000473594 " "
 *   insn=0x00000000004735A0 string=0x00000000004735A4 "\t"
 *   insn=0x00000000004735A4 string=0x00000000004735A8 ")i@"
 *   insn=0x00000000004735A8 string=0x00000000004735AC " "
 *   insn=0x00000000004735CC string=0x00000000004735D0 ""
 *   insn=0x00000000004735D0 string=0x00000000004735D4 "i@"
 *   insn=0x00000000004735E0 string=0x00000000004735E4 "I"
 *   insn=0x00000000004735F8 string=0x00000000001F65B0 "0'"
 *   insn=0x0000000000473600 string=0x0000000000473604 "ar@"
 *   insn=0x0000000000473610 string=0x0000000000473614 "!"
 *   insn=0x0000000000473614 string=0x0000000000473618 "  ""
 *   insn=0x0000000000473620 string=0x0000000000473624 "h"
 *   insn=0x0000000000473624 string=0x0000000000473628 "\t"
 *   insn=0x0000000000473628 string=0x000000000047364C "`r"
 *   insn=0x0000000000473634 string=0x0000000000473638 "#8#"
 *   insn=0x0000000000473638 string=0x000000000047363C "c"
 *   insn=0x000000000047363C string=0x0000000000473640 "` ""
 *   insn=0x0000000000473640 string=0x0000000000473644 ")"
 *   insn=0x0000000000473644 string=0x0000000000473648 ")"
 *   insn=0x000000000047364C string=0x0000000000473650 "\t"
 *   insn=0x0000000000473650 string=0x0000000000473654 "h"
 *   insn=0x0000000000473658 string=0x000000000047365C "`"
 *   insn=0x0000000000473664 string=0x0000000000473668 "h\n@"
 *   insn=0x0000000000473668 string=0x000000000047366C ""
 *   insn=0x000000000047366C string=0x0000000000473670 "h\n"
 *   insn=0x0000000000473678 string=0x00000000001F4630 "P'"
 *   insn=0x0000000000473680 string=0x0000000000473684 "@"
 *   insn=0x0000000000473684 string=0x0000000000473688 ""
 *   insn=0x0000000000473688 string=0x000000000047368C ""
 *   insn=0x0000000000473690 string=0x0000000000473694 ""
 *   insn=0x0000000000473694 string=0x0000000000473698 ""
 *   insn=0x00000000004736A0 string=0x00000000004736A4 "h"
 *   insn=0x00000000004736A8 string=0x00000000004736AC "h"
 *   insn=0x00000000004736D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004736E0 string=0x00000000004736E4 "("
 *   insn=0x00000000004736E4 string=0x00000000004736E8 "\t\t@"
 *   insn=0x00000000004736E8 string=0x00000000004736EC ")"
 *   insn=0x00000000004736EC string=0x00000000004736F0 "\t\t"
 *   insn=0x00000000004736F4 string=0x00000000004736F8 "\t"
 *   insn=0x00000000004736F8 string=0x00000000004736FC ")"
 *   insn=0x0000000000473700 string=0x0000000000473704 " "
 *   insn=0x0000000000473708 string=0x000000000047370C "n8"
 *   insn=0x0000000000473728 string=0x000000000047372C "h&L"
 *   insn=0x0000000000473734 string=0x0000000000473738 "6"
 *   insn=0x0000000000473748 string=0x000000000047374C ""
 *   insn=0x000000000047374C string=0x0000000000473750 "i@"
 *   insn=0x0000000000473768 string=0x000000000047376C "hb@"
 *   insn=0x0000000000473778 string=0x000000000047377C ""
 *   insn=0x000000000047377C string=0x0000000000473780 "i@"
 *   insn=0x0000000000473798 string=0x000000000047379C "!"
 *   insn=0x00000000004737A8 string=0x00000000004737AC "h"
 *   insn=0x00000000004737A8 string=0x00000000001FD330 "0'"
 *   insn=0x00000000004737BC string=0x00000000001F9020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::SceneObject::RemoveChildObject(
        Caver::SceneObject *this,
        Caver::SceneObject *a2,
        char a3)
{
  _QWORD *v6; // x9
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  char v9; // w0
  unsigned __int64 v10; // x24
  __int64 v11; // x0
  char v12; // w0
  Caver::SceneObject *result; // x0
  float v14; // s0
  int v15; // w9
  _DWORD *v16; // x8
  int v17; // w8

  _ReadStatusReg(TPIDR_EL0);
  v6 = (_QWORD *)*((_QWORD *)this + 24);
  v7 = *((_QWORD *)this + 25) - (_QWORD)v6;
  if ( v7 )
  {
    v8 = v7 >> 3;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, Caver::SceneObject *))(*(_QWORD *)*v6 + 208LL))(*v6, 4, a2);
    if ( v8 >= 2 && (v9 & 1) == 0 )
    {
      v10 = 1;
      do
      {
        v11 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v10);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, Caver::SceneObject *))(*(_QWORD *)v11 + 208LL))(v11, 4, a2);
        ++v10;
      }
      while ( v8 > v10 && (v12 & 1) == 0 );
    }
  }
  *((_QWORD *)a2 + 6) = 0;
  result = (Caver::SceneObject *)Caver::SceneObjectGroup::RemoveObject(*((Caver::SceneObjectGroup **)this + 7), a2);
  if ( (a3 & 1) != 0 )
  {
    v14 = *((float *)this + 28);
    if ( fabsf(v14 - *((float *)a2 + 28)) <= 0.0001 )
    {
      v16 = (_DWORD *)((char *)a2 + 116);
      if ( fabsf(*((float *)this + 29) - *((float *)a2 + 29)) <= 0.0001 )
      {
LABEL_18:
        *((_BYTE *)a2 + 232) = 1;
        return result;
      }
      v15 = *((_DWORD *)this + 29);
    }
    else
    {
      v15 = *((_DWORD *)this + 29);
      v16 = (_DWORD *)((char *)a2 + 116);
    }
    *((float *)a2 + 28) = v14;
    *v16 = v15;
    if ( !*((_BYTE *)a2 + 180) )
    {
      result = (Caver::SceneObject *)*((_QWORD *)a2 + 4);
      if ( result )
      {
        ++*((_DWORD *)a2 + 2);
        Caver::Scene::RegisterObjectForWorldBoundsUpdate();
        result = a2;
        if ( a2 )
        {
          v17 = *((_DWORD *)a2 + 2) - 1;
          *((_DWORD *)a2 + 2) = v17;
          if ( !v17 )
            result = (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)a2 + 8LL))(a2);
        }
      }
      *((_BYTE *)a2 + 180) = 1;
    }
    goto LABEL_18;
  }
  return result;
}

