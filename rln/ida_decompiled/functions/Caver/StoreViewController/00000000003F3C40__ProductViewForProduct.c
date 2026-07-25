/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F3C40
 * Mangled: _ZN5Caver19StoreViewController21ProductViewForProductERKSs
 * Demangled: Caver::StoreViewController::ProductViewForProduct(std::string const&)
 *
 * Callers: 1
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 10
 *   insn=0x00000000003F3C58 string=0x00000000003F3C5C "v"G"
 *   insn=0x00000000003F3C5C string=0x00000000003F3C60 ""
 *   insn=0x00000000003F3C60 string=0x00000000003F3C64 "@"
 *   insn=0x00000000003F3C64 string=0x00000000003F3C68 "4"
 *   insn=0x00000000003F3C7C string=0x00000000003F3C80 ""
 *   insn=0x00000000003F3C90 string=0x00000000003F3C94 "?"
 *   insn=0x00000000003F3C94 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003F3C98 string=0x00000000003F3CC8 "h.@"
 *   insn=0x00000000003F3C9C string=0x00000000003F3CA0 "?"
 *   insn=0x00000000003F3CC8 string=0x00000000003F3CCC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreViewController::ProductViewForProduct(_QWORD *a1, const void **a2)
{
  __int64 v3; // x22
  __int64 v4; // x8
  const void *v5; // x20
  __int64 v6; // x23
  unsigned __int64 v7; // x24
  unsigned __int64 v8; // x25
  size_t v9; // x21
  _QWORD *v10; // x0

  v3 = a1[14];
  v4 = a1[15] - v3;
  if ( !v4 )
    return 0;
  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = v4 >> 3;
  v9 = *((_QWORD *)*a2 - 3);
  while ( 1 )
  {
    v10 = *(_QWORD **)(v3 + 8 * v7);
    if ( *(v10 - 3) == v9 && !memcmp(v10, v5, v9) )
      break;
    ++v7;
    v6 += 16;
    if ( v8 <= v7 )
      return 0;
  }
  return *(_QWORD *)(*(_QWORD *)(a1[11] + 320LL) + v6);
}

