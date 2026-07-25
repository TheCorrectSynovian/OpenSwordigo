/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002616A4
 * Mangled: _ZN5boost6detail18lcast_put_unsignedISt11char_traitsIcEjcEEPT1_T0_S5_
 * Demangled: boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *
 * Callers: 1
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *   0x000000000052DB88  sub_52DB88
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x00000000002616B8 string=0x00000000002616BC "V"
 *   insn=0x00000000002616D8 string=0x00000000002616DC "+1"
 *   insn=0x00000000002616E4 string=0x00000000002616E8 "\t"
 *   insn=0x00000000002616F0 string=0x00000000002616F4 " "
 *   insn=0x00000000002616F8 string=0x00000000002616FC "W"
 *   insn=0x0000000000261704 string=0x0000000000261708 "@"
 *   insn=0x000000000026171C string=0x0000000000261724 "K"
 *   insn=0x000000000026172C string=0x0000000000261730 "M"
 *   insn=0x0000000000261734 string=0x0000000000261738 "L"
 *   insn=0x0000000000261748 string=0x000000000026174C "A"
 *   insn=0x000000000026174C string=0x0000000000261750 ")"
 *   insn=0x0000000000261750 string=0x0000000000261754 "?"
 *   insn=0x0000000000261758 string=0x000000000026176C "h"
 *   insn=0x0000000000261764 string=0x0000000000261768 "L"
 *   insn=0x0000000000261788 string=0x000000000026178C "p"
 *   insn=0x0000000000261798 string=0x000000000026179C ")$"
 *   insn=0x000000000026179C string=0x00000000002617A0 ")"
 *   insn=0x00000000002617AC string=0x00000000002617E4 "\t$"
 *   insn=0x00000000002617B0 string=0x00000000002617B4 "Ej"
 *   insn=0x00000000002617C0 string=0x00000000002617C4 "!"
 *   insn=0x00000000002617E4 string=0x00000000002617E8 ")=G"
 *   insn=0x00000000002617E8 string=0x00000000002617EC "!"
 *   insn=0x00000000002617F0 string=0x00000000002617F4 "\t"
 *   insn=0x00000000002617F0 string=0x0000000000261808 "\t"
 *   insn=0x00000000002617F4 string=0x00000000002617F8 "*"
 *   insn=0x00000000002617F8 string=0x00000000002617FC "\n"
 *   insn=0x0000000000261804 string=0x0000000000261814 "?"
 *   insn=0x0000000000261808 string=0x000000000026180C "*"
 *   insn=0x000000000026180C string=0x0000000000261810 "\n"
 *   insn=0x0000000000261828 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026182C string=0x0000000000261830 "*$"
 *   insn=0x0000000000261830 string=0x0000000000261834 "J"
 *   insn=0x0000000000261838 string=0x000000000026183C "(a"
 *   insn=0x0000000000261844 string=0x0000000000261848 "\n$"
 *   insn=0x0000000000261848 string=0x000000000026184C "J=G"
 *   insn=0x000000000026184C string=0x0000000000261850 ")!"
 *   insn=0x0000000000261850 string=0x0000000000261854 "j"
 *   insn=0x0000000000261854 string=0x0000000000261858 "*"
 *   insn=0x0000000000261854 string=0x0000000000261880 "*"
 *   insn=0x0000000000261858 string=0x000000000026185C "K"
 *   insn=0x000000000026185C string=0x0000000000261860 "+"
 *   insn=0x0000000000261864 string=0x0000000000261868 "_"
 *   insn=0x0000000000261878 string=0x000000000026187C "\t"
 *   insn=0x0000000000261880 string=0x0000000000261884 "K"
 *   insn=0x0000000000261884 string=0x0000000000261888 "+"
 *   insn=0x0000000000261888 string=0x000000000026188C "_"
 *   insn=0x000000000026188C string=0x0000000000261890 ""
 *   insn=0x00000000002618A0 string=0x00000000002618A4 "\tj"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>(
        unsigned int a1,
        __int64 a2)
{
  __int64 v4; // x21
  _BYTE *v5; // x10
  unsigned __int64 v6; // x23
  char v7; // w8
  __int64 v8; // x9
  int v9; // w12
  char v10; // w14
  bool v11; // cc
  _BYTE *v12; // x0
  unsigned int *v14; // x8
  int v15; // w9
  _BYTE *v16; // [xsp+0h] [xbp-50h] BYREF
  char v17[8]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v18; // [xsp+18h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_53DB28(v17);
  v4 = sub_52DB88(v17);
  (*(void (__fastcall **)(_BYTE **__return_ptr, __int64))(*(_QWORD *)v4 + 32LL))(&v16, v4);
  v5 = v16;
  v6 = *((_QWORD *)v16 - 3);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v5 = v16;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( (char)*v5 >= 1 )
    LOBYTE(v9) = *v5;
  else
    LOBYTE(v9) = 127;
  v10 = v9;
  do
  {
    if ( !v10 )
    {
      if ( ++v8 < v6 )
      {
        v9 = (char)v16[v8];
        if ( v9 < 1 )
          LOBYTE(v9) = 127;
      }
      *(_BYTE *)--a2 = v7;
      v10 = v9;
    }
    --v10;
    v11 = a1 > 9;
    *(_BYTE *)--a2 = (a1 % 0xA) | 0x30;
    a1 /= 0xAu;
  }
  while ( v11 );
  v12 = v16 - 24;
  if ( v16 - 24 != (_BYTE *)&qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v16 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v12);
  }
  sub_53C0C8(v17);
  return a2;
}

