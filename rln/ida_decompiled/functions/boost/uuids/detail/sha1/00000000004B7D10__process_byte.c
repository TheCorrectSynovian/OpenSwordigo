/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7D10
 * Mangled: _ZN5boost5uuids6detail4sha112process_byteEh
 * Demangled: boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Callers: 1
 *   0x0000000000201440  boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Callees: 17
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F48C0  boost::uuids::detail::sha1::process_block(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F75E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000201CC0  boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000004B84EC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x000000000054A024  sub_54A024
 *   0x000000000054AB28  sub_54AB28
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 91
 *   insn=0x00000000004B7D1C string=0x00000000004B7D20 "T"
 *   insn=0x00000000004B7D2C string=0x00000000004B7D30 "h.@"
 *   insn=0x00000000004B7D30 string=0x00000000004B7D34 "\t"
 *   insn=0x00000000004B7D34 string=0x00000000004B7D38 "h"
 *   insn=0x00000000004B7D38 string=0x00000000004B7D3C "i."
 *   insn=0x00000000004B7D40 string=0x00000000004B7D44 "h.@"
 *   insn=0x00000000004B7D58 string=0x00000000001F48C0 "P'"
 *   insn=0x00000000004B7D5C string=0x00000000004B7D60 "(F"
 *   insn=0x00000000004B7D68 string=0x00000000004B7D6C "b"
 *   insn=0x00000000004B7D6C string=0x00000000004B7D78 "h"
 *   insn=0x00000000004B7D70 string=0x00000000004B7D74 ""
 *   insn=0x00000000004B7D74 string=0x00000000004B7D94 ""
 *   insn=0x00000000004B7D78 string=0x00000000004B7D7C "\t"
 *   insn=0x00000000004B7D94 string=0x00000000004B7D98 "("
 *   insn=0x00000000004B7DA8 string=0x00000000004B7DBC "E"
 *   insn=0x00000000004B7DBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B7DC0 string=0x000000000059748C "sha1 too many bytes"
 *   insn=0x00000000004B7DCC string=0x00000000004B7DD0 "z"
 *   insn=0x00000000004B7DDC string=0x00000000004B7DE0 "RK"
 *   insn=0x00000000004B7DE0 string=0x00000000004B7DE4 "h"
 *   insn=0x00000000004B7DE4 string=0x00000000004B7DE8 "UE"
 *   insn=0x00000000004B7DEC string=0x00000000004B7DF0 " !"
 *   insn=0x00000000004B7DF0 string=0x00000000004B7DF4 "a""
 *   insn=0x00000000004B7DF4 string=0x00000000004B7DF8 "A"
 *   insn=0x00000000004B7E00 string=0x00000000004B7E04 "h"
 *   insn=0x00000000004B7E04 string=0x00000000004B7E08 ")E"
 *   insn=0x00000000004B7E08 string=0x00000000004B7E0C "\t"
 *   insn=0x00000000004B7E0C string=0x00000000005974A0 "void boost::uuids::detail::sha1::process_byte(unsigned char)"
 *   insn=0x00000000004B7E10 string=0x00000000004B7E14 ")"
 *   insn=0x00000000004B7E14 string=0x00000000004B7E18 "\n"
 *   insn=0x00000000004B7E18 string=0x00000000004B7E20 ""
 *   insn=0x00000000004B7E18 string=0x00000000005974DD "./../../../../Dependencies/boost\boost/uuid/sha1.hpp"
 *   insn=0x00000000004B7E24 string=0x00000000004B7E28 ""
 *   insn=0x00000000004B7E28 string=0x00000000004B7E2C " "
 *   insn=0x00000000004B7E48 string=0x00000000004B7E4C "h"
 *   insn=0x00000000004B7E4C string=0x00000000004B7E50 ""
 *   insn=0x00000000004B7E54 string=0x00000000004B7E58 "A"
 *   insn=0x00000000004B7E64 string=0x00000000004B7E68 "\t"
 *   insn=0x00000000004B7E68 string=0x00000000004B7E6C ")"
 *   insn=0x00000000004B7E70 string=0x00000000004B7E74 " "
 *   insn=0x00000000004B7E78 string=0x00000000004B7E7C "jH"
 *   insn=0x00000000004B7E84 string=0x00000000001F8280 "0'"
 *   insn=0x00000000004B7E8C string=0x00000000004B7E90 "x "
 *   insn=0x00000000004B7E94 string=0x00000000004B7E98 "cH"
 *   insn=0x00000000004B7EA4 string=0x00000000004B7EA8 "i"
 *   insn=0x00000000004B7EA8 string=0x00000000004B7EAC ")"
 *   insn=0x00000000004B7EB8 string=0x00000000004B7EBC "i"
 *   insn=0x00000000004B7EBC string=0x00000000004B7EC0 ")=G"
 *   insn=0x00000000004B7EC0 string=0x00000000004B7EC4 "!"
 *   insn=0x00000000004B7EC4 string=0x00000000004B7EC8 "i"
 *   insn=0x00000000004B7EC8 string=0x00000000004B7ECC "\t"
 *   insn=0x00000000004B7EC8 string=0x00000000004B7EF4 "\t"
 *   insn=0x00000000004B7ECC string=0x00000000004B7ED0 "*"
 *   insn=0x00000000004B7ED0 string=0x00000000004B7ED4 "\n"
 *   insn=0x00000000004B7ED8 string=0x00000000004B7EDC "?"
 *   insn=0x00000000004B7EDC string=0x00000000004B7EE0 "l"
 *   insn=0x00000000004B7EE4 string=0x00000000004B7EE8 "/"
 *   insn=0x00000000004B7EEC string=0x00000000004B7EF0 "u&"
 *   insn=0x00000000004B7EF4 string=0x00000000004B7EF8 "*"
 *   insn=0x00000000004B7EF8 string=0x00000000004B7EFC "\n"
 *   insn=0x00000000004B7EFC string=0x00000000004B7F00 "?"
 *   insn=0x00000000004B7F00 string=0x00000000004B7F04 ""
 *   insn=0x00000000004B7F28 string=0x00000000004B7F2C "M"
 *   insn=0x00000000004B7F2C string=0x00000000004B7F30 "h"
 *   insn=0x00000000004B7F2C string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B7F30 string=0x00000000004B7F34 "UE"
 *   insn=0x00000000004B7F3C string=0x00000000004B7F40 " !"
 *   insn=0x00000000004B7F40 string=0x00000000004B7F44 "A"
 *   insn=0x00000000004B7F4C string=0x00000000004B7F50 "v"
 *   insn=0x00000000004B7F50 string=0x00000000004B7F54 "u"
 *   insn=0x00000000004B7F68 string=0x00000000004B7F6C ""
 *   insn=0x00000000004B7F6C string=0x00000000004B7F70 "@"
 *   insn=0x00000000004B7F7C string=0x00000000004B7F80 "h"
 *   insn=0x00000000004B7F84 string=0x00000000004B7F88 ")E"
 *   insn=0x00000000004B7F90 string=0x00000000004B7F94 "\tA"
 *   insn=0x00000000004B7F94 string=0x00000000004B7F98 ""
 *   insn=0x00000000004B7FAC string=0x00000000004B7FB0 "a"
 *   insn=0x00000000004B7FAC string=0x00000000001F75E0 "0'"
 *   insn=0x00000000004B7FB0 string=0x00000000004B7FB4 "b"
 *   insn=0x00000000004B7FB4 string=0x00000000004B7FB8 "!$D"
 *   insn=0x00000000004B7FB8 string=0x00000000004B7FBC "B"
 *   insn=0x00000000004B7FC4 string=0x00000000004B7FC8 "6"
 *   insn=0x00000000004B7FC8 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B7FE0 string=0x00000000004B7FE4 "# "
 *   insn=0x00000000004B8000 string=0x00000000004B8004 "\t"
 *   insn=0x00000000004B8004 string=0x00000000004B8008 ")"
 *   insn=0x00000000004B800C string=0x00000000004B8010 " "
 *   insn=0x00000000004B801C string=0x00000000004B8020 "h"
 *   insn=0x00000000004B8024 string=0x00000000004B8028 "r"
 *   insn=0x00000000004B8028 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B802C string=0x00000000004B8030 "%&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::uuids::detail::sha1::process_byte(_QWORD *this, char a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x8
  unsigned __int64 v4; // x8
  _QWORD *v5; // x9
  __int64 v6; // x10
  _QWORD *v7; // x19
  unsigned __int64 v8; // t1
  __int128 v9; // q0
  __int64 v10; // x0
  __int64 v11; // x19
  void *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  int v15; // w9
  __int64 v16; // [xsp+78h] [xbp-70h] BYREF
  _BYTE v17[8]; // [xsp+80h] [xbp-68h] BYREF
  __int64 v18; // [xsp+88h] [xbp-60h] BYREF
  __int64 (__fastcall **v19)(std::exception *); // [xsp+98h] [xbp-50h] BYREF
  __int64 v20; // [xsp+A0h] [xbp-48h] BYREF
  void (__fastcall __noreturn **v21)(); // [xsp+A8h] [xbp-40h]
  __int128 v22; // [xsp+B0h] [xbp-38h]
  const char *v23; // [xsp+C0h] [xbp-28h]
  int v24; // [xsp+C8h] [xbp-20h]
  __int64 v25; // [xsp+D0h] [xbp-18h]

  v2 = this;
  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = this[11];
  this[11] = v3 + 1;
  *((_BYTE *)this + v3 + 20) = a2;
  if ( this[11] == 64 )
  {
    this[11] = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)this);
  }
  v5 = v2 + 12;
  v4 = v2[12];
  if ( v4 >= 0xFFFFFFF8 )
  {
    v8 = v2[13];
    v7 = v2 + 13;
    v4 = v8;
    *(v7 - 1) = 0;
    if ( v8 >= 0xFFFFFFFF )
    {
      sub_566BB8((int)&v16, "sha1 too many bytes");
      sub_54AB28(v17, &v16);
      v19 = off_6B7650;
      sub_56A528(&v20, &v18);
      *(_QWORD *)&v9 = vdupq_n_s64(0).n128_u64[0];
      *((_QWORD *)&v9 + 1) = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v19 = off_6D7430;
      v21 = (void (__fastcall __noreturn **)())off_6D7458;
      v22 = v9;
      v23 = "./../../../../Dependencies/boost\\boost/uuid/sha1.hpp";
      v24 = 104;
      boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>();
      v11 = v10;
      v21 = off_6BC9E0;
      if ( (_QWORD)v22 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(v22);
      sub_54A024((std::exception *)&v19);
      sub_54A024((std::exception *)v17);
      v12 = (void *)(v16 - 24);
      if ( (__int64 *)(v16 - 24) == &qword_6FD2E0 )
        goto LABEL_15;
      v13 = (unsigned int *)(v16 - 8);
      if ( !&pthread_create )
        goto LABEL_16;
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
      if ( v14 > 0 )
        goto LABEL_15;
      while ( 1 )
      {
        operator delete(v12);
        do
        {
LABEL_15:
          v12 = (void *)sub_5818C4(v11);
LABEL_16:
          v15 = (*v13)--;
        }
        while ( v15 > 0 );
      }
    }
    v6 = 1;
    v5 = v7;
  }
  else
  {
    v6 = 8;
  }
  *v5 = v4 + v6;
  return this;
}

