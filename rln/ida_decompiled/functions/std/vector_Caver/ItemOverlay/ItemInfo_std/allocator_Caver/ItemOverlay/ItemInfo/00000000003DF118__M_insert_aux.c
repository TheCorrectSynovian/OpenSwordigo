/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DF118
 * Mangled: _ZNSt6vectorIN5Caver11ItemOverlay8ItemInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *
 * Callers: 1
 *   0x00000000001FC400  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201320  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 142
 *   insn=0x00000000003DF140 string=0x00000000003DF144 " "
 *   insn=0x00000000003DF14C string=0x00000000003DF150 "\t"
 *   insn=0x00000000003DF150 string=0x00000000003DF154 "\n%"
 *   insn=0x00000000003DF158 string=0x00000000003DF15C "*"
 *   insn=0x00000000003DF158 string=0x00000000003DF168 "\t"
 *   insn=0x00000000003DF15C string=0x00000000003DF160 "J"
 *   insn=0x00000000003DF160 string=0x00000000003DF164 "*"
 *   insn=0x00000000003DF168 string=0x00000000003DF16C "\na"
 *   insn=0x00000000003DF16C string=0x00000000003DF170 "\t"
 *   insn=0x00000000003DF180 string=0x00000000003DF184 ""
 *   insn=0x00000000003DF19C string=0x00000000003DF1A4 "}"
 *   insn=0x00000000003DF1A4 string=0x00000000003DF1A8 ""
 *   insn=0x00000000003DF1B0 string=0x00000000003DF1B4 "H"
 *   insn=0x00000000003DF1B4 string=0x00000000003DF1B8 "I@"
 *   insn=0x00000000003DF1BC string=0x00000000003DF1C0 "*"
 *   insn=0x00000000003DF1C0 string=0x00000000003DF1C4 "J"
 *   insn=0x00000000003DF1C4 string=0x00000000003DF1C8 "*"
 *   insn=0x00000000003DF1D0 string=0x00000000003DF1D4 "5"
 *   insn=0x00000000003DF1D8 string=0x00000000003DF1DC ""
 *   insn=0x00000000003DF1E8 string=0x00000000003DF1EC "\t@"
 *   insn=0x00000000003DF1F8 string=0x00000000003DF1FC ""
 *   insn=0x00000000003DF208 string=0x00000000003DF20C "@"
 *   insn=0x00000000003DF218 string=0x00000000003DF21C "9"
 *   insn=0x00000000003DF21C string=0x00000000003DF220 "?"
 *   insn=0x00000000003DF228 string=0x00000000003DF22C "L"
 *   insn=0x00000000003DF230 string=0x00000000003DF240 "u"
 *   insn=0x00000000003DF234 string=0x00000000003DF238 ""
 *   insn=0x00000000003DF240 string=0x00000000003DF244 "xR"
 *   insn=0x00000000003DF244 string=0x00000000003DF248 "5"
 *   insn=0x00000000003DF248 string=0x00000000003DF28C "v"
 *   insn=0x00000000003DF24C string=0x00000000003DF250 ""
 *   insn=0x00000000003DF25C string=0x00000000003DF260 "\t@"
 *   insn=0x00000000003DF26C string=0x00000000003DF270 ""
 *   insn=0x00000000003DF27C string=0x00000000003DF280 "@"
 *   insn=0x00000000003DF294 string=0x00000000003DF298 ""
 *   insn=0x00000000003DF29C string=0x00000000003DF2A0 "!"
 *   insn=0x00000000003DF2A8 string=0x00000000003DF2AC "\t@"
 *   insn=0x00000000003DF2B4 string=0x00000000003DF2B8 ""
 *   insn=0x00000000003DF2BC string=0x00000000003DF2C0 "!"
 *   insn=0x00000000003DF2E0 string=0x00000000003DF2E4 " "
 *   insn=0x00000000003DF2F4 string=0x00000000003DF2F8 ""
 *   insn=0x00000000003DF2F8 string=0x00000000003DF2FC ""
 *   insn=0x00000000003DF2FC string=0x00000000003DF300 "}"
 *   insn=0x00000000003DF300 string=0x00000000003DF304 "\n"
 *   insn=0x00000000003DF304 string=0x00000000003DF308 "IU"
 *   insn=0x00000000003DF308 string=0x00000000003DF30C "H"
 *   insn=0x00000000003DF318 string=0x00000000003DF31C "J"
 *   insn=0x00000000003DF31C string=0x00000000003DF320 "_"
 *   insn=0x00000000003DF320 string=0x00000000003DF324 "7"
 *   insn=0x00000000003DF32C string=0x00000000003DF330 "h"
 *   insn=0x00000000003DF330 string=0x00000000003DF4BC "v"
 *   insn=0x00000000003DF33C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003DF344 string=0x00000000003DF34C "h"
 *   insn=0x00000000003DF350 string=0x00000000003DF354 ""
 *   insn=0x00000000003DF354 string=0x00000000003DF358 "}"
 *   insn=0x00000000003DF35C string=0x00000000003DF360 "\nU\n"
 *   insn=0x00000000003DF360 string=0x00000000003DF364 "I"
 *   insn=0x00000000003DF368 string=0x00000000003DF36C "I"
 *   insn=0x00000000003DF370 string=0x00000000003DF374 "*"
 *   insn=0x00000000003DF374 string=0x00000000003DF378 "J"
 *   insn=0x00000000003DF378 string=0x00000000003DF37C "*"
 *   insn=0x00000000003DF384 string=0x00000000003DF388 "U\n"
 *   insn=0x00000000003DF388 string=0x00000000003DF38C "\t"
 *   insn=0x00000000003DF398 string=0x00000000003DF39C " "
 *   insn=0x00000000003DF3A4 string=0x00000000003DF3A8 "*"
 *   insn=0x00000000003DF3A8 string=0x00000000003DF3AC "\n"
 *   insn=0x00000000003DF3AC string=0x00000000003DF3B0 "*"
 *   insn=0x00000000003DF3B0 string=0x00000000003DF3B4 "\n"
 *   insn=0x00000000003DF3B8 string=0x00000000003DF3BC "K"
 *   insn=0x00000000003DF3B8 string=0x00000000003DF3C8 "*"
 *   insn=0x00000000003DF3BC string=0x00000000003DF3C0 "k"
 *   insn=0x00000000003DF3C0 string=0x00000000003DF3C4 "K"
 *   insn=0x00000000003DF3C8 string=0x00000000003DF3CC ")a"
 *   insn=0x00000000003DF3CC string=0x00000000003DF3D0 "?"
 *   insn=0x00000000003DF3D0 string=0x00000000003DF3D4 "\n"
 *   insn=0x00000000003DF3D4 string=0x00000000003DF3D8 "a"
 *   insn=0x00000000003DF3D8 string=0x00000000003DF3DC "a"
 *   insn=0x00000000003DF3E4 string=0x00000000003DF3E8 "?"
 *   insn=0x00000000003DF3EC string=0x00000000003DF3F0 "h"
 *   insn=0x00000000003DF3F0 string=0x00000000003DF3F4 ""
 *   insn=0x00000000003DF3F4 string=0x00000000003DF3F8 "h"
 *   insn=0x00000000003DF3F8 string=0x00000000003DF3FC ""
 *   insn=0x00000000003DF400 string=0x00000000003DF404 "\t"
 *   insn=0x00000000003DF400 string=0x00000000003DF410 "h"
 *   insn=0x00000000003DF404 string=0x00000000003DF408 ")"
 *   insn=0x00000000003DF408 string=0x00000000003DF40C "\t"
 *   insn=0x00000000003DF410 string=0x00000000003DF414 "sb"
 *   insn=0x00000000003DF418 string=0x00000000003DF41C ""
 *   insn=0x00000000003DF420 string=0x00000000003DF424 "a"
 *   insn=0x00000000003DF42C string=0x00000000003DF488 "v"
 *   insn=0x00000000003DF430 string=0x00000000003DF434 "3"
 *   insn=0x00000000003DF434 string=0x00000000003DF438 "h"
 *   insn=0x00000000003DF438 string=0x00000000003DF43C ""
 *   insn=0x00000000003DF43C string=0x00000000003DF440 "h"
 *   insn=0x00000000003DF444 string=0x00000000003DF448 "h"
 *   insn=0x00000000003DF44C string=0x00000000003DF450 "\t@"
 *   insn=0x00000000003DF454 string=0x00000000003DF458 "h\n@"
 *   insn=0x00000000003DF458 string=0x00000000003DF45C ""
 *   insn=0x00000000003DF45C string=0x00000000003DF460 "h\n"
 *   insn=0x00000000003DF464 string=0x00000000003DF468 "h"
 *   insn=0x00000000003DF46C string=0x00000000003DF470 "@"
 *   insn=0x00000000003DF478 string=0x00000000003DF47C "?"
 *   insn=0x00000000003DF490 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DF4CC string=0x00000000003DF4D0 "4"
 *   insn=0x00000000003DF4D4 string=0x00000000003DF4D8 ""
 *   insn=0x00000000003DF4E4 string=0x00000000003DF4E8 "\t@"
 *   insn=0x00000000003DF4F4 string=0x00000000003DF4F8 ""
 *   insn=0x00000000003DF504 string=0x00000000003DF508 "@"
 *   insn=0x00000000003DF548 string=0x00000000003DF54C "`"
 *   insn=0x00000000003DF550 string=0x00000000003DF554 "w"
 *   insn=0x00000000003DF568 string=0x00000000003DF56C """
 *   insn=0x00000000003DF56C string=0x00000000003DF570 "W"
 *   insn=0x00000000003DF570 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003DF578 string=0x00000000003DF60C ":"
 *   insn=0x00000000003DF588 string=0x00000000003DF58C "]"
 *   insn=0x00000000003DF598 string=0x00000000003DF59C ""
 *   insn=0x00000000003DF5B0 string=0x00000000003DF5B4 "c"
 *   insn=0x00000000003DF5C8 string=0x00000000003DF5CC ")"
 *   insn=0x00000000003DF5CC string=0x00000000003DF5D0 ""
 *   insn=0x00000000003DF5D4 string=0x00000000003DF5D8 """
 *   insn=0x00000000003DF5E0 string=0x00000000003DF5E4 "@\t"
 *   insn=0x00000000003DF5E4 string=0x00000000003DF5E8 "="
 *   insn=0x00000000003DF5EC string=0x00000000003DF5F0 "_"
 *   insn=0x00000000003DF5F8 string=0x00000000003DF5FC "_"
 *   insn=0x00000000003DF600 string=0x00000000003DF604 "@"
 *   insn=0x00000000003DF62C string=0x00000000003DF630 "`"
 *   insn=0x00000000003DF644 string=0x00000000003DF648 "("
 *   insn=0x00000000003DF65C string=0x00000000003DF660 "?"
 *   insn=0x00000000003DF660 string=0x00000000003DF664 "L"
 *   insn=0x00000000003DF668 string=0x00000000003DF66C "?"
 *   insn=0x00000000003DF670 string=0x00000000003DF674 " "
 *   insn=0x00000000003DF678 string=0x00000000003DF67C "h"
 *   insn=0x00000000003DF684 string=0x00000000003DF688 "w"
 *   insn=0x00000000003DF68C string=0x00000000003DF690 "$"
 *   insn=0x00000000003DF694 string=0x00000000003DF698 "_"
 *   insn=0x00000000003DF6A0 string=0x00000000003DF6A4 "_"
 *   insn=0x00000000003DF6A8 string=0x00000000003DF6AC "@"
 *   insn=0x00000000003DF6C0 string=0x00000000003DF6C4 "L"
 *   insn=0x00000000003DF6D0 string=0x00000000003DF6D4 "`"
 *   insn=0x00000000003DF6EC string=0x00000000003DF6F0 "?"
 *   insn=0x00000000003DF6F8 string=0x00000000003DF6FC "?"
 *   insn=0x00000000003DF700 string=0x00000000003DF704 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::ItemOverlay::ItemInfo>::_M_insert_aux(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // x8
  __int64 v6; // x19
  __int64 v7; // x23
  __int64 v8; // x9
  _QWORD *v9; // x20
  __int64 v10; // x24
  int v11; // w22
  signed __int64 v12; // x25
  __int64 v13; // x26
  __int64 v14; // x8
  __int64 v15; // t1
  __int64 v16; // x9
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x25
  bool v26; // zf
  __int64 v27; // x8
  unsigned __int64 v28; // x8
  __int64 v29; // x10
  bool v30; // cf
  unsigned __int64 v31; // x8
  int v32; // w10
  unsigned __int64 v33; // x23
  __int64 v34; // x21
  _QWORD *v35; // x10
  __int64 v36; // x9
  _QWORD *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x10
  int v41; // w10
  _QWORD *v42; // x25
  __int64 i; // x24
  __int64 v44; // x8
  int v45; // w8
  _QWORD *v46; // x19
  __int64 v47; // x8
  __int64 v48; // x8

  v4 = a1[1];
  v6 = a2;
  if ( v4 == a1[2] )
  {
    v25 = (_QWORD *)*a1;
    v27 = v4 - *a1;
    v26 = v27 == 0;
    v28 = 0xAAAAAAAAAAAAAAABLL * (v27 >> 3);
    if ( v26 )
      v29 = 1;
    else
      v29 = v28;
    v30 = __CFADD__(v29, v28);
    v31 = v29 + v28;
    v32 = v30;
    if ( v32 | (v31 > 0xAAAAAAAAAAAAAAALL) )
      v33 = 0xAAAAAAAAAAAAAAALL;
    else
      v33 = v31;
    if ( v33 )
    {
      if ( v33 > 0xAAAAAAAAAAAAAAALL )
        sub_565294();
      v34 = operator new(24 * v33);
    }
    else
    {
      v34 = 0;
    }
    v35 = (_QWORD *)(v34 + 8 * ((v6 - (__int64)v25) >> 3));
    *v35 = *a3;
    v36 = a3[1];
    v35[1] = v36;
    if ( v36 )
      ++*(_QWORD *)(v36 + 8);
    *(_DWORD *)(v34 + 8 * ((v6 - (__int64)v25) >> 3) + 16) = *((_DWORD *)a3 + 4);
    v37 = (_QWORD *)*a1;
    v38 = v34;
    if ( *a1 != v6 )
    {
      v38 = v34;
      v39 = *a1;
      do
      {
        *(_QWORD *)v38 = *(_QWORD *)v39;
        v40 = *(_QWORD *)(v39 + 8);
        *(_QWORD *)(v38 + 8) = v40;
        if ( v40 )
          ++*(_QWORD *)(v40 + 8);
        v41 = *(_DWORD *)(v39 + 16);
        v39 += 24;
        *(_DWORD *)(v38 + 16) = v41;
        v38 += 24;
      }
      while ( v39 != v6 );
    }
    v42 = (_QWORD *)a1[1];
    for ( i = v38 + 24; (_QWORD *)v6 != v42; i += 24 )
    {
      *(_QWORD *)i = *(_QWORD *)v6;
      v44 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)(i + 8) = v44;
      if ( v44 )
        ++*(_QWORD *)(v44 + 8);
      v45 = *(_DWORD *)(v6 + 16);
      v6 += 24;
      *(_DWORD *)(i + 16) = v45;
    }
    if ( v37 != v42 )
    {
      do
      {
        v46 = (_QWORD *)v37[1];
        if ( v46 )
        {
          v47 = v46[1] - 1LL;
          v46[1] = v47;
          if ( !v47 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v46 + 16LL))(v46);
            v48 = v46[2] - 1LL;
            v46[2] = v48;
            if ( !v48 )
              (*(void (__fastcall **)(_QWORD *))(*v46 + 24LL))(v46);
          }
        }
        v37 += 3;
      }
      while ( v42 != v37 );
      v37 = (_QWORD *)*a1;
    }
    if ( v37 )
      operator delete(v37);
    *a1 = v34;
    a1[1] = i;
    a1[2] = v34 + 24 * v33;
  }
  else
  {
    v7 = v4 - 24;
    v8 = *(_QWORD *)(v4 - 16);
    *(_QWORD *)v4 = *(_QWORD *)(v4 - 24);
    *(_QWORD *)(v4 + 8) = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v4 - 8);
    a1[1] = v4 + 24;
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    v11 = *((_DWORD *)a3 + 4);
    if ( v7 - a2 >= 1 )
    {
      v12 = (v7 - a2) / 0x18uLL + 1;
      v13 = v4 - 24;
      do
      {
        v15 = *(_QWORD *)(v13 - 24);
        v13 -= 24;
        v14 = v15;
        v16 = *(_QWORD *)(v13 + 8);
        if ( v16 )
          ++*(_QWORD *)(v16 + 8);
        v17 = *(_QWORD **)(v7 + 8);
        *(_QWORD *)v7 = v14;
        *(_QWORD *)(v7 + 8) = v16;
        if ( v17 )
        {
          v18 = v17[1] - 1LL;
          v17[1] = v18;
          if ( !v18 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
            v19 = v17[2] - 1LL;
            v17[2] = v19;
            if ( !v19 )
              (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
          }
        }
        --v12;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v7 - 8);
        v7 = v13;
      }
      while ( v12 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v20 = *(_QWORD **)(v6 + 8);
    *(_QWORD *)v6 = v10;
    *(_QWORD *)(v6 + 8) = v9;
    if ( v20 )
    {
      v21 = v20[1] - 1LL;
      v20[1] = v21;
      if ( !v21 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v22 = v20[2] - 1LL;
        v20[2] = v22;
        if ( !v22 )
          (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
      }
    }
    *(_DWORD *)(v6 + 16) = v11;
    if ( v9 )
    {
      v23 = v9[1] - 1LL;
      v9[1] = v23;
      if ( !v23 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v24 = v9[2] - 1LL;
        v9[2] = v24;
        if ( !v24 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

