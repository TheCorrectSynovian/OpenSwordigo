/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9C10
 * Mangled: _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_
 * Demangled: lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *
 * Callers: 1
 *   0x00000000001F63C0  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004ECDE8  sub_4ECDE8
 *   0x00000000004F5ED4  sub_4F5ED4
 *
 * Referenced strings: 13
 *   insn=0x00000000004E9C14 string=0x00000000004E9C18 "I"
 *   insn=0x00000000004E9C18 string=0x00000000004E9C1C "?"
 *   insn=0x00000000004E9C24 string=0x00000000004E9C28 "J"
 *   insn=0x00000000004E9C28 string=0x00000000004E9C2C "K)@9k"
 *   insn=0x00000000004E9C2C string=0x00000000004E9C30 "k"
 *   insn=0x00000000004E9C30 string=0x00000000004E9C3C "A"
 *   insn=0x00000000004E9C48 string=0x00000000004E9C4C "?"
 *   insn=0x00000000004ECD5C string=0x00000000004ECD60 "W"
 *   insn=0x00000000004ECD88 string=0x00000000004ECD8C "R$"
 *   insn=0x00000000004ECD8C string=0x00000000004F5ED4 "("
 *   insn=0x00000000004ECDB0 string=0x00000000004ECDB4 ""
 *   insn=0x00000000004ECDC8 string=0x00000000004ECDE4 ";%"
 *   insn=0x00000000004ECDE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_dump(__int64 a1, __int64 (__fastcall *a2)(__int64, _BYTE *, __int64, __int64), __int64 a3)
{
  __int64 v3; // x29
  __int64 v4; // x30
  __int64 v5; // x10
  __int64 v7; // x10
  __int64 v9; // x1
  __int64 (__fastcall *v10)(__int64, _BYTE *, __int64, __int64); // x20
  __int64 v12; // x21
  _QWORD v13[2]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v14; // [xsp+18h] [xbp-68h]
  int v15; // [xsp+20h] [xbp-60h]
  unsigned int v16; // [xsp+24h] [xbp-5Ch]
  _BYTE v17[12]; // [xsp+2Ch] [xbp-54h] BYREF
  __int64 v18; // [xsp+38h] [xbp-48h]
  __int64 v19; // [xsp+70h] [xbp-10h]
  __int64 v20; // [xsp+78h] [xbp-8h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v5 - 8) != 6 )
    return 1;
  v7 = *(_QWORD *)(v5 - 16);
  if ( *(_BYTE *)(v7 + 10) )
    return 1;
  v9 = *(_QWORD *)(v7 + 32);
  v19 = v3;
  v20 = v4;
  v10 = a2;
  v12 = v9;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13[0] = a1;
  v13[1] = a2;
  v14 = a3;
  v15 = 0;
  sub_4F5ED4(v17);
  v16 = v10(a1, v17, 12, v14);
  sub_4ECDE8(v12, 0, v13);
  return v16;
}

