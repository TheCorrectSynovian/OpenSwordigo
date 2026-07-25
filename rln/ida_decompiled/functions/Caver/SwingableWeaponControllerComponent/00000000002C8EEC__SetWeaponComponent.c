/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C8EEC
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent18SetWeaponComponentERKN5boost13intrusive_ptrINS_24SwingableWeaponComponentEEE
 * Demangled: Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Callers: 1
 *   0x00000000001F9B80  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Callees: 7
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB2F0  Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent *)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000002C8EFC string=0x00000000002C8F00 "U"
 *   insn=0x00000000002C8F14 string=0x00000000002C8F18 "hN@"
 *   insn=0x00000000002C8F20 string=0x00000000002C8F24 "H"
 *   insn=0x00000000002C8F30 string=0x00000000002C8F34 "hN@"
 *   insn=0x00000000002C8F30 string=0x00000000001FB2F0 "0'"
 *   insn=0x00000000002C8F34 string=0x00000000002C8F38 "`"
 *   insn=0x00000000002C8F40 string=0x00000000002C8F44 "'"
 *   insn=0x00000000002C8F44 string=0x00000000001FDFE0 "0'"
 *   insn=0x00000000002C8F4C string=0x00000000002C8F50 "@"
 *   insn=0x00000000002C8F4C string=0x00000000002C8F5C "hN@"
 *   insn=0x00000000002C8F50 string=0x00000000002C8F54 ""
 *   insn=0x00000000002C8F54 string=0x00000000002C8F58 ""
 *   insn=0x00000000002C8F5C string=0x00000000002C8F60 "`N"
 *   insn=0x00000000002C8F64 string=0x00000000002C8F68 "\t\t@"
 *   insn=0x00000000002C8F68 string=0x00000000002C8F6C ")"
 *   insn=0x00000000002C8F6C string=0x00000000002C8F70 "\t\t"
 *   insn=0x00000000002C8F70 string=0x00000000002C8F74 " "
 *   insn=0x00000000002C8F74 string=0x00000000002C8FF8 "\t"
 *   insn=0x00000000002C8F80 string=0x00000000002C8F84 "hN@"
 *   insn=0x00000000002C8F88 string=0x00000000002C8F8C "h"
 *   insn=0x00000000002C8F8C string=0x00000000002C8F90 ""
 *   insn=0x00000000002C8F94 string=0x00000000002C8F98 ""
 *   insn=0x00000000002C8F94 string=0x00000000002C8FAC "h"
 *   insn=0x00000000002C8F9C string=0x00000000002C8FA0 "|"
 *   insn=0x00000000002C8FA0 string=0x00000000002C8FA4 "hN@"
 *   insn=0x00000000002C8FB4 string=0x00000000002C8FB8 "\t@"
 *   insn=0x00000000002C8FB8 string=0x00000000002C8FBC ")"
 *   insn=0x00000000002C8FBC string=0x00000000002C8FC0 "\t"
 *   insn=0x00000000002C8FC8 string=0x00000000002C8FCC "q"
 *   insn=0x00000000002C8FCC string=0x00000000001F6190 "0'"
 *   insn=0x00000000002C8FD4 string=0x00000000002C8FD8 "@"
 *   insn=0x00000000002C8FD8 string=0x00000000002C8FDC ""
 *   insn=0x00000000002C8FDC string=0x00000000002C8FE0 ""
 *   insn=0x00000000002C8FE0 string=0x00000000002C8FE4 "a"
 *   insn=0x00000000002C8FE4 string=0x00000000002C8FE8 ""
 *   insn=0x00000000002C8FE8 string=0x00000000002C8FEC ""
 *   insn=0x00000000002C8FF0 string=0x00000000002C8FF4 ""
 *   insn=0x00000000002C8FFC string=0x00000000002C9000 ")"
 *   insn=0x00000000002C9000 string=0x00000000002C9004 " "
 *   insn=0x00000000002C9004 string=0x00000000002C9008 "`N@"
 *   insn=0x00000000002C9034 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C903C string=0x00000000002C9040 "("
 *   insn=0x00000000002C9040 string=0x00000000002C9044 "\t\t@"
 *   insn=0x00000000002C9044 string=0x00000000002C9048 ")"
 *   insn=0x00000000002C9048 string=0x00000000002C904C "\t\t"
 *   insn=0x00000000002C9050 string=0x00000000002C9054 "\t"
 *   insn=0x00000000002C9054 string=0x00000000002C9058 ")"
 *   insn=0x00000000002C905C string=0x00000000002C9060 " "
 *   insn=0x00000000002C906C string=0x00000000002C9070 "\tL@"
 *   insn=0x00000000002C9070 string=0x00000000002C9074 "("
 *   insn=0x00000000002C9074 string=0x00000000002C9078 ""
 *   insn=0x00000000002C907C string=0x00000000002C9080 " "
 *   insn=0x00000000002C9080 string=0x00000000002C9084 ""
 *   insn=0x00000000002C9084 string=0x00000000002C9088 "a"
 *   insn=0x00000000002C9088 string=0x00000000002C908C ""
 *   insn=0x00000000002C908C string=0x00000000002C9090 "H"
 *   insn=0x00000000002C9090 string=0x00000000002C9098 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponComponent *__fastcall Caver::SwingableWeaponControllerComponent::SetWeaponComponent(
        Caver::SwingableWeaponControllerComponent *a1,
        Caver::SwingableWeaponComponent **a2)
{
  Caver::SwingableWeaponComponent *result; // x0
  Caver::SwingableWeaponComponent *v5; // x8
  _QWORD *v6; // x8
  int v7; // w9
  __int64 v8; // x0
  int v9; // w8
  int v10; // w8
  Caver::SwingableWeaponComponent *v11; // [xsp+0h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = *a2;
  v5 = (Caver::SwingableWeaponComponent *)*((_QWORD *)a1 + 19);
  if ( *a2 != v5 )
  {
    if ( v5 )
    {
      Caver::SwingableWeaponComponent::SetController(*((Caver::SwingableWeaponComponent **)a1 + 19), 0);
      Caver::SceneObject::RemoveChildObject(
        *((Caver::SceneObject **)a1 + 5),
        *(Caver::SceneObject **)(*((_QWORD *)a1 + 19) + 40LL),
        1);
      result = *a2;
    }
    if ( result )
      ++*((_DWORD *)result + 2);
    v6 = (_QWORD *)*((_QWORD *)a1 + 19);
    *((_QWORD *)a1 + 19) = result;
    if ( v6 && (v7 = *((_DWORD *)v6 + 2) - 1, (*((_DWORD *)v6 + 2) = v7) == 0) )
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD *))(*v6 + 8LL))(v6, v6);
      result = (Caver::SwingableWeaponComponent *)*((_QWORD *)a1 + 19);
      if ( !result )
        return result;
    }
    else if ( !result )
    {
      return result;
    }
    Caver::SwingableWeaponComponent::SetController(result, a1);
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 40LL);
    v9 = *((unsigned __int8 *)a1 + 172);
    *(_BYTE *)(v8 + 244) = v9;
    if ( !v9 && !*(_BYTE *)(v8 + 240) )
    {
      Caver::SceneObject::Activate((Caver::SceneObject *)v8);
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 40LL);
    }
    v11 = (Caver::SwingableWeaponComponent *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    Caver::SceneObject::AddChildObject();
    result = v11;
    if ( v11 )
    {
      v10 = *((_DWORD *)v11 + 2) - 1;
      *((_DWORD *)v11 + 2) = v10;
      if ( !v10 )
        return (Caver::SwingableWeaponComponent *)(*(__int64 (__fastcall **)(Caver::SwingableWeaponComponent *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}

