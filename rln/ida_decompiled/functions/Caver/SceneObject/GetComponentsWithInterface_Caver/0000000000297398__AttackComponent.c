/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297398
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_15AttackComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>> *)
 *
 * Callers: 1
 *   0x00000000001FA310  Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>> *)
 *
 * Callees: 6
 *   0x00000000001F58C0  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000292E8C  Caver::AttackComponent::className(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000002973AC string=0x00000000002973B0 "V"
 *   insn=0x00000000002973C8 string=0x00000000002973CC "u""
 *   insn=0x00000000002973D8 string=0x00000000002973DC "h\n@"
 *   insn=0x00000000002973D8 string=0x00000000002973E8 "h"
 *   insn=0x00000000002973DC string=0x00000000002973E0 ""
 *   insn=0x00000000002973E0 string=0x00000000002973E4 "h\n"
 *   insn=0x00000000002973E8 string=0x00000000002973EC "Q@"
 *   insn=0x00000000002973FC string=0x000000000029746C "h\n@"
 *   insn=0x0000000000297400 string=0x0000000000297404 "h\n@"
 *   insn=0x0000000000297404 string=0x0000000000297408 ""
 *   insn=0x0000000000297408 string=0x000000000029740C "h\n"
 *   insn=0x0000000000297410 string=0x0000000000297414 "?"
 *   insn=0x0000000000297414 string=0x0000000000297418 " "
 *   insn=0x0000000000297418 string=0x000000000029741C "3"
 *   insn=0x000000000029741C string=0x0000000000297420 "h\n@"
 *   insn=0x0000000000297420 string=0x0000000000297424 ""
 *   insn=0x0000000000297424 string=0x0000000000297428 "h\n"
 *   insn=0x0000000000297434 string=0x0000000000297438 ""
 *   insn=0x0000000000297434 string=0x0000000000297450 "@"
 *   insn=0x0000000000297444 string=0x00000000001F58C0 "P'"
 *   insn=0x0000000000297450 string=0x0000000000297454 ""
 *   insn=0x0000000000297454 string=0x0000000000297458 ""
 *   insn=0x000000000029745C string=0x0000000000297460 ""
 *   insn=0x0000000000297460 string=0x0000000000297464 ""
 *   insn=0x000000000029746C string=0x0000000000297470 ""
 *   insn=0x0000000000297470 string=0x0000000000297474 "h\n"
 *   insn=0x0000000000297478 string=0x000000000029747C "h"
 *   insn=0x0000000000297480 string=0x0000000000297484 ""
 *   insn=0x00000000002974C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002974CC string=0x00000000002974D0 "h"
 *   insn=0x00000000002974D0 string=0x00000000002974D4 "\t\t@"
 *   insn=0x00000000002974D0 string=0x00000000002974FC "h\n@"
 *   insn=0x00000000002974D4 string=0x00000000002974D8 ")"
 *   insn=0x00000000002974D8 string=0x00000000002974DC "\t\t"
 *   insn=0x00000000002974E0 string=0x00000000002974E4 "\t"
 *   insn=0x00000000002974E4 string=0x00000000002974E8 ")"
 *   insn=0x00000000002974EC string=0x00000000002974F0 " "
 *   insn=0x00000000002974FC string=0x0000000000297500 ""
 *   insn=0x0000000000297500 string=0x0000000000297504 "h\n"
 *   insn=0x0000000000297508 string=0x000000000029750C "h"
 *   insn=0x000000000029750C string=0x0000000000297510 ""
 *   insn=0x0000000000297560 string=0x0000000000297564 "_"
 *   insn=0x0000000000297564 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000297574 string=0x0000000000297588 ""
 *   insn=0x000000000029757C string=0x0000000000297580 "X"
 *   insn=0x0000000000297590 string=0x0000000000297594 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(__int64 result, __int64 a2)
{
  _DWORD **v3; // x23
  _DWORD **i; // x24
  _DWORD *v5; // x19
  _QWORD *v6; // x1
  int v7; // w8
  int v8; // w8

  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_DWORD ***)(result + 192);
  for ( i = *(_DWORD ***)(result + 200); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( *v3 )
      ++v5[2];
    result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD (*)(Caver::AttackComponent *__hidden)))(*(_QWORD *)v5 + 160LL))(
               v5,
               Caver::AttackComponent::Interface);
    if ( (result & 1) == 0 )
      goto LABEL_11;
    ++v5[2];
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<boost::intrusive_ptr<Caver::AttackComponent>>::_M_insert_aux();
      result = (__int64)v5;
      if ( v5 )
      {
LABEL_9:
        v7 = *(_DWORD *)(result + 8) - 1;
        *(_DWORD *)(result + 8) = v7;
        if ( !v7 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      }
    }
    else
    {
      *v6 = v5;
      ++v5[2];
      *(_QWORD *)(a2 + 8) = v6 + 1;
      result = (__int64)v5;
      if ( v5 )
        goto LABEL_9;
    }
LABEL_11:
    v8 = v5[2] - 1;
    v5[2] = v8;
    if ( !v8 )
      result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}

