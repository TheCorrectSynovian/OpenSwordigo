/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026BC7C
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_34SwingableWeaponControllerComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Callers: 1
 *   0x00000000001F7EC0  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000002001E0  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000261410  Caver::SwingableWeaponControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 92
 *   insn=0x000000000026BC90 string=0x000000000026BC94 "V"
 *   insn=0x000000000026BCBC string=0x000000000026BCC0 "h\n@"
 *   insn=0x000000000026BCBC string=0x000000000026BCCC "h"
 *   insn=0x000000000026BCC0 string=0x000000000026BCC4 ""
 *   insn=0x000000000026BCC4 string=0x000000000026BCC8 "h\n"
 *   insn=0x000000000026BCCC string=0x000000000026BCD0 "Q@"
 *   insn=0x000000000026BCE0 string=0x000000000026BD50 "h\n@"
 *   insn=0x000000000026BCE4 string=0x000000000026BCE8 "h\n@"
 *   insn=0x000000000026BCE8 string=0x000000000026BCEC ""
 *   insn=0x000000000026BCEC string=0x000000000026BCF0 "h\n"
 *   insn=0x000000000026BCF4 string=0x000000000026BCF8 "?"
 *   insn=0x000000000026BCF8 string=0x000000000026BCFC " "
 *   insn=0x000000000026BCFC string=0x000000000026BD00 "3"
 *   insn=0x000000000026BD00 string=0x000000000026BD04 "h\n@"
 *   insn=0x000000000026BD04 string=0x000000000026BD08 ""
 *   insn=0x000000000026BD08 string=0x000000000026BD0C "h\n"
 *   insn=0x000000000026BD18 string=0x000000000026BD1C ""
 *   insn=0x000000000026BD18 string=0x000000000026BD34 "@"
 *   insn=0x000000000026BD24 string=0x000000000026BD28 ".Q"
 *   insn=0x000000000026BD34 string=0x000000000026BD38 ""
 *   insn=0x000000000026BD38 string=0x000000000026BD3C ""
 *   insn=0x000000000026BD40 string=0x000000000026BD44 ""
 *   insn=0x000000000026BD44 string=0x000000000026BD48 ""
 *   insn=0x000000000026BD50 string=0x000000000026BD54 ""
 *   insn=0x000000000026BD54 string=0x000000000026BD58 "h\n"
 *   insn=0x000000000026BD5C string=0x000000000026BD60 "h"
 *   insn=0x000000000026BD64 string=0x000000000026BD68 ""
 *   insn=0x000000000026BD88 string=0x000000000026BDA4 "K)"
 *   insn=0x000000000026BDA4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026BDB0 string=0x000000000026BDB4 "h"
 *   insn=0x000000000026BDB4 string=0x000000000026BDB8 "\t\t@"
 *   insn=0x000000000026BDB4 string=0x000000000026BDE0 "h\n@"
 *   insn=0x000000000026BDB8 string=0x000000000026BDBC ")"
 *   insn=0x000000000026BDBC string=0x000000000026BDC0 "\t\t"
 *   insn=0x000000000026BDC4 string=0x000000000026BDC8 "\t"
 *   insn=0x000000000026BDC8 string=0x000000000026BDCC ")"
 *   insn=0x000000000026BDD0 string=0x000000000026BDD4 " "
 *   insn=0x000000000026BDE0 string=0x000000000026BDE4 ""
 *   insn=0x000000000026BDE4 string=0x000000000026BDE8 "h\n"
 *   insn=0x000000000026BDEC string=0x000000000026BDF0 "h"
 *   insn=0x000000000026BDF0 string=0x000000000026BDF4 ""
 *   insn=0x000000000026BE04 string=0x000000000026BE08 "Q"
 *   insn=0x000000000026BE1C string=0x000000000026BE20 "h\nA"
 *   insn=0x000000000026BE24 string=0x000000000026BE28 "hB@"
 *   insn=0x000000000026BE24 string=0x000000000026BE94 "h"
 *   insn=0x000000000026BE2C string=0x000000000026BE30 "t"
 *   insn=0x000000000026BE38 string=0x000000000026BE3C ")/"
 *   insn=0x000000000026BE3C string=0x000000000026BE40 "hB@"
 *   insn=0x000000000026BE3C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026BE4C string=0x000000000026BE50 "t."
 *   insn=0x000000000026BE50 string=0x000000000026BE54 "t\n"
 *   insn=0x000000000026BE54 string=0x000000000026BE58 "`"
 *   insn=0x000000000026BE64 string=0x000000000026BE68 "u"
 *   insn=0x000000000026BE68 string=0x000000000026BE6C "U"
 *   insn=0x000000000026BE70 string=0x000000000026BE74 "`"
 *   insn=0x000000000026BE70 string=0x000000000026BE84 "q@"
 *   insn=0x000000000026BE7C string=0x000000000026BE80 "hB@"
 *   insn=0x000000000026BE98 string=0x000000000026BE9C "h"
 *   insn=0x000000000026BEA0 string=0x000000000026BEA4 "`"
 *   insn=0x000000000026BEA4 string=0x000000000026BEA8 "!"
 *   insn=0x000000000026BEB0 string=0x000000000026BEB4 "@  "
 *   insn=0x000000000026BEBC string=0x000000000026BEC0 "a"
 *   insn=0x000000000026BEC4 string=0x000000000026BEC8 "e"
 *   insn=0x000000000026BEC8 string=0x000000000026BED4 "b"
 *   insn=0x000000000026BED0 string=0x000000000026BEE8 "`B@"
 *   insn=0x000000000026BED4 string=0x000000000026BED8 "!(""
 *   insn=0x000000000026BEDC string=0x000000000026BEE0 "m"
 *   insn=0x000000000026BEEC string=0x000000000026BEF0 "t*"
 *   insn=0x000000000026BEF4 string=0x000000000026BEF8 "`"
 *   insn=0x000000000026BF00 string=0x000000000026BF04 "`B@"
 *   insn=0x000000000026BF08 string=0x000000000026BF0C "ED"
 *   insn=0x000000000026BF0C string=0x000000000026BF10 "u"
 *   insn=0x000000000026BF0C string=0x00000000001FD020 "0'"
 *   insn=0x000000000026BF14 string=0x000000000026BF18 "hB@"
 *   insn=0x000000000026BF14 string=0x000000000026BF48 "hB@"
 *   insn=0x000000000026BF18 string=0x000000000026BF1C "v\nA"
 *   insn=0x000000000026BF20 string=0x000000000026BF24 "`"
 *   insn=0x000000000026BF20 string=0x000000000026BF34 "\tq@"
 *   insn=0x000000000026BF2C string=0x000000000026BF30 "hB@"
 *   insn=0x000000000026BF4C string=0x000000000026BF50 "t."
 *   insn=0x000000000026BF50 string=0x000000000026BF54 "t\n"
 *   insn=0x000000000026BF58 string=0x000000000026BF5C "`"
 *   insn=0x000000000026BF58 string=0x000000000026BF70 "`"
 *   insn=0x000000000026BF64 string=0x000000000026BF68 "hB@"
 *   insn=0x000000000026BF68 string=0x000000000026BF6C "t\nA"
 *   insn=0x000000000026BF7C string=0x000000000026BF80 "u"
 *   insn=0x000000000026BF80 string=0x000000000026BF84 "U"
 *   insn=0x000000000026BF88 string=0x000000000026BF8C "`"
 *   insn=0x000000000026BF88 string=0x000000000026BF9C "q@"
 *   insn=0x000000000026BF94 string=0x000000000026BF98 "hB@"
 *   insn=0x000000000026BFD0 string=0x000000000026BFD4 "hB@"
 *   insn=0x000000000026BFD4 string=0x000000000026BFD8 "t\nA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(
        __int64 result,
        __int64 a2)
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
    result = (*(__int64 (__fastcall **)(_DWORD *, __int64 (__fastcall *(__fastcall *)(Caver::SwingableWeaponControllerComponent *))(Caver::SwingableWeaponControllerComponent *__hidden)))(*(_QWORD *)v5 + 160LL))(
               v5,
               Caver::SwingableWeaponControllerComponent::Interface);
    if ( (result & 1) == 0 )
      goto LABEL_11;
    ++v5[2];
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>::_M_insert_aux();
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

