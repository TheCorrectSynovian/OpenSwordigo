/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7A54
 * Mangled: _ZN5boost5uuids6detail4sha110get_digestERA5_j
 * Demangled: boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *
 * Callers: 1
 *   0x00000000001F8640  boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *
 * Callees: 1
 *   0x00000000001F48C0  boost::uuids::detail::sha1::process_block(void)
 *
 * Referenced strings: 98
 *   insn=0x00000000004B7A60 string=0x00000000004B7A64 "h.@"
 *   insn=0x00000000004B7A6C string=0x00000000004B7A70 "\n"
 *   insn=0x00000000004B7A70 string=0x00000000004B7A74 "h"
 *   insn=0x00000000004B7A74 string=0x00000000004B7A78 "j."
 *   insn=0x00000000004B7A78 string=0x00000000004B7A7C "\tQ"
 *   insn=0x00000000004B7A7C string=0x00000000004B7A80 "h.@"
 *   insn=0x00000000004B7A94 string=0x00000000004B7A98 "h.@"
 *   insn=0x00000000004B7A94 string=0x00000000001F48C0 "P'"
 *   insn=0x00000000004B7A9C string=0x00000000004B7AA0 "c"
 *   insn=0x00000000004B7AA0 string=0x00000000004B7AA4 "\t"
 *   insn=0x00000000004B7AA4 string=0x00000000004B7AA8 "h"
 *   insn=0x00000000004B7AA8 string=0x00000000004B7AAC "i."
 *   insn=0x00000000004B7AB0 string=0x00000000004B7AB4 "h.@"
 *   insn=0x00000000004B7AC4 string=0x00000000004B7AC8 "~"
 *   insn=0x00000000004B7AC8 string=0x00000000004B7ACC "h.@"
 *   insn=0x00000000004B7AD0 string=0x00000000004B7AD4 "\t"
 *   insn=0x00000000004B7AD4 string=0x00000000004B7AD8 "h"
 *   insn=0x00000000004B7AD8 string=0x00000000004B7ADC "i."
 *   insn=0x00000000004B7AE0 string=0x00000000004B7AE4 "h.@"
 *   insn=0x00000000004B7AF4 string=0x00000000004B7AF8 "r"
 *   insn=0x00000000004B7AF8 string=0x00000000004B7AFC "h.@"
 *   insn=0x00000000004B7B08 string=0x00000000004B7B48 "i6@"
 *   insn=0x00000000004B7B10 string=0x00000000004B7B14 "\t"
 *   insn=0x00000000004B7B14 string=0x00000000004B7B18 "h"
 *   insn=0x00000000004B7B18 string=0x00000000004B7B1C "i."
 *   insn=0x00000000004B7B20 string=0x00000000004B7B24 "h.@"
 *   insn=0x00000000004B7B34 string=0x00000000004B7B38 "b"
 *   insn=0x00000000004B7B38 string=0x00000000004B7B3C "h.@"
 *   insn=0x00000000004B7B48 string=0x00000000004B7B4C "\n"
 *   insn=0x00000000004B7B4C string=0x00000000004B7B50 "h"
 *   insn=0x00000000004B7B50 string=0x00000000004B7B54 "j."
 *   insn=0x00000000004B7B54 string=0x00000000004B7B58 ")"
 *   insn=0x00000000004B7B58 string=0x00000000004B7B5C "\tQ"
 *   insn=0x00000000004B7B5C string=0x00000000004B7B60 "h.@"
 *   insn=0x00000000004B7B68 string=0x00000000004B7B7C "i6@"
 *   insn=0x00000000004B7B70 string=0x00000000004B7B74 "S"
 *   insn=0x00000000004B7B74 string=0x00000000004B7B78 "h.@"
 *   insn=0x00000000004B7B7C string=0x00000000004B7B80 "\n"
 *   insn=0x00000000004B7B80 string=0x00000000004B7B84 "h"
 *   insn=0x00000000004B7B84 string=0x00000000004B7B88 "j."
 *   insn=0x00000000004B7B88 string=0x00000000004B7B8C ")"
 *   insn=0x00000000004B7B8C string=0x00000000004B7B90 "\tQ"
 *   insn=0x00000000004B7B90 string=0x00000000004B7B94 "h.@"
 *   insn=0x00000000004B7B9C string=0x00000000004B7BB0 "i6@"
 *   insn=0x00000000004B7BA4 string=0x00000000004B7BA8 "F"
 *   insn=0x00000000004B7BA8 string=0x00000000004B7BAC "h.@"
 *   insn=0x00000000004B7BB0 string=0x00000000004B7BB4 "\n"
 *   insn=0x00000000004B7BB4 string=0x00000000004B7BB8 "h"
 *   insn=0x00000000004B7BB8 string=0x00000000004B7BBC "j."
 *   insn=0x00000000004B7BBC string=0x00000000004B7BC0 ")"
 *   insn=0x00000000004B7BC0 string=0x00000000004B7BC4 "\tQ"
 *   insn=0x00000000004B7BC4 string=0x00000000004B7BC8 "h.@"
 *   insn=0x00000000004B7BD0 string=0x00000000004B7BE4 "i6@"
 *   insn=0x00000000004B7BD8 string=0x00000000004B7BDC "9"
 *   insn=0x00000000004B7BDC string=0x00000000004B7BE0 "h.@"
 *   insn=0x00000000004B7BE4 string=0x00000000004B7BE8 "\n"
 *   insn=0x00000000004B7BE8 string=0x00000000004B7BEC "h"
 *   insn=0x00000000004B7BEC string=0x00000000004B7BF0 "j."
 *   insn=0x00000000004B7BF0 string=0x00000000004B7BF4 "\tQ"
 *   insn=0x00000000004B7BF4 string=0x00000000004B7BF8 "h.@"
 *   insn=0x00000000004B7C00 string=0x00000000004B7C14 "i2@"
 *   insn=0x00000000004B7C08 string=0x00000000004B7C0C "-"
 *   insn=0x00000000004B7C0C string=0x00000000004B7C10 "h.@"
 *   insn=0x00000000004B7C14 string=0x00000000004B7C18 "\n"
 *   insn=0x00000000004B7C18 string=0x00000000004B7C1C "h"
 *   insn=0x00000000004B7C1C string=0x00000000004B7C20 "j."
 *   insn=0x00000000004B7C20 string=0x00000000004B7C24 ")"
 *   insn=0x00000000004B7C24 string=0x00000000004B7C28 "\tQ"
 *   insn=0x00000000004B7C28 string=0x00000000004B7C2C "h.@"
 *   insn=0x00000000004B7C34 string=0x00000000004B7C48 "i2@"
 *   insn=0x00000000004B7C3C string=0x00000000004B7C40 " "
 *   insn=0x00000000004B7C40 string=0x00000000004B7C44 "h.@"
 *   insn=0x00000000004B7C48 string=0x00000000004B7C4C "\n"
 *   insn=0x00000000004B7C4C string=0x00000000004B7C50 "h"
 *   insn=0x00000000004B7C50 string=0x00000000004B7C54 "j."
 *   insn=0x00000000004B7C54 string=0x00000000004B7C58 ")"
 *   insn=0x00000000004B7C58 string=0x00000000004B7C5C "\tQ"
 *   insn=0x00000000004B7C5C string=0x00000000004B7C60 "h.@"
 *   insn=0x00000000004B7C68 string=0x00000000004B7C7C "i2@"
 *   insn=0x00000000004B7C74 string=0x00000000004B7C78 "h.@"
 *   insn=0x00000000004B7C7C string=0x00000000004B7C80 "\n"
 *   insn=0x00000000004B7C80 string=0x00000000004B7C84 "h"
 *   insn=0x00000000004B7C84 string=0x00000000004B7C88 "j."
 *   insn=0x00000000004B7C88 string=0x00000000004B7C8C ")"
 *   insn=0x00000000004B7C8C string=0x00000000004B7C90 "\tQ"
 *   insn=0x00000000004B7C90 string=0x00000000004B7C94 "h.@"
 *   insn=0x00000000004B7C9C string=0x00000000004B7CB0 "i2@"
 *   insn=0x00000000004B7CA8 string=0x00000000004B7CAC "h.@"
 *   insn=0x00000000004B7CB0 string=0x00000000004B7CB4 "\n"
 *   insn=0x00000000004B7CB4 string=0x00000000004B7CB8 "h"
 *   insn=0x00000000004B7CB8 string=0x00000000004B7CBC "j."
 *   insn=0x00000000004B7CBC string=0x00000000004B7CC0 "\tQ"
 *   insn=0x00000000004B7CC0 string=0x00000000004B7CC4 "h.@"
 *   insn=0x00000000004B7CCC string=0x00000000004B7CDC "h"
 *   insn=0x00000000004B7CE0 string=0x00000000004B7CE4 "h"
 *   insn=0x00000000004B7CE8 string=0x00000000004B7CEC "h\n@"
 *   insn=0x00000000004B7CF0 string=0x00000000004B7CF4 "h"
 *   insn=0x00000000004B7CF8 string=0x00000000004B7CFC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::uuids::detail::sha1::get_digest(_QWORD *this, unsigned int (*a2)[5])
{
  __int64 v2; // x19
  __int64 v3; // x8
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x9

  v2 = (__int64)this;
  v3 = this[11];
  this[11] = v3 + 1;
  *((_BYTE *)this + v3 + 20) = 0x80;
  v5 = this[11];
  if ( v5 == 64 )
  {
    this[11] = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)this);
    v5 = *(_QWORD *)(v2 + 88);
  }
  if ( v5 < 0x39 )
  {
    if ( v5 != 56 )
    {
      do
      {
        *(_QWORD *)(v2 + 88) = v5 + 1;
        *(_BYTE *)(v2 + v5 + 20) = 0;
        v5 = *(_QWORD *)(v2 + 88);
        if ( v5 == 64 )
        {
          *(_QWORD *)(v2 + 88) = 0;
          this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
          v5 = *(_QWORD *)(v2 + 88);
        }
      }
      while ( v5 < 0x38 );
    }
  }
  else
  {
    do
    {
      *(_QWORD *)(v2 + 88) = v5 + 1;
      *(_BYTE *)(v2 + v5 + 20) = 0;
      v5 = *(_QWORD *)(v2 + 88);
      if ( v5 == 64 )
      {
        *(_QWORD *)(v2 + 88) = 0;
        this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
        v5 = *(_QWORD *)(v2 + 88);
      }
    }
    while ( v5 );
    do
    {
      *(_QWORD *)(v2 + 88) = v5 + 1;
      *(_BYTE *)(v2 + v5 + 20) = 0;
      v5 = *(_QWORD *)(v2 + 88);
      if ( v5 == 64 )
      {
        *(_QWORD *)(v2 + 88) = 0;
        this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
        v5 = *(_QWORD *)(v2 + 88);
      }
    }
    while ( v5 < 0x38 );
  }
  v6 = *(_QWORD *)(v2 + 104);
  *(_QWORD *)(v2 + 88) = v5 + 1;
  *(_BYTE *)(v2 + v5 + 20) = BYTE3(v6);
  v7 = *(_QWORD *)(v2 + 88);
  if ( v7 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v7 = *(_QWORD *)(v2 + 88);
  }
  v8 = *(_QWORD *)(v2 + 104);
  *(_QWORD *)(v2 + 88) = v7 + 1;
  *(_BYTE *)(v2 + v7 + 20) = BYTE2(v8);
  v9 = *(_QWORD *)(v2 + 88);
  if ( v9 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v9 = *(_QWORD *)(v2 + 88);
  }
  v10 = *(_QWORD *)(v2 + 104);
  *(_QWORD *)(v2 + 88) = v9 + 1;
  *(_BYTE *)(v2 + v9 + 20) = BYTE1(v10);
  v11 = *(_QWORD *)(v2 + 88);
  if ( v11 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v11 = *(_QWORD *)(v2 + 88);
  }
  v12 = *(_QWORD *)(v2 + 104);
  *(_QWORD *)(v2 + 88) = v11 + 1;
  *(_BYTE *)(v2 + v11 + 20) = v12;
  v13 = *(_QWORD *)(v2 + 88);
  if ( v13 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v13 = *(_QWORD *)(v2 + 88);
  }
  v14 = *(_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 88) = v13 + 1;
  *(_BYTE *)(v2 + v13 + 20) = BYTE3(v14);
  v15 = *(_QWORD *)(v2 + 88);
  if ( v15 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v15 = *(_QWORD *)(v2 + 88);
  }
  v16 = *(_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 88) = v15 + 1;
  *(_BYTE *)(v2 + v15 + 20) = BYTE2(v16);
  v17 = *(_QWORD *)(v2 + 88);
  if ( v17 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v17 = *(_QWORD *)(v2 + 88);
  }
  v18 = *(_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 88) = v17 + 1;
  *(_BYTE *)(v2 + v17 + 20) = BYTE1(v18);
  v19 = *(_QWORD *)(v2 + 88);
  if ( v19 == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
    v19 = *(_QWORD *)(v2 + 88);
  }
  v20 = *(_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 88) = v19 + 1;
  *(_BYTE *)(v2 + v19 + 20) = v20;
  if ( *(_QWORD *)(v2 + 88) == 64 )
  {
    *(_QWORD *)(v2 + 88) = 0;
    this = (_QWORD *)boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)v2);
  }
  (*a2)[0] = *(_DWORD *)v2;
  (*a2)[1] = *(_DWORD *)(v2 + 4);
  (*a2)[2] = *(_DWORD *)(v2 + 8);
  (*a2)[3] = *(_DWORD *)(v2 + 12);
  (*a2)[4] = *(_DWORD *)(v2 + 16);
  return this;
}

