/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021A054
 * Mangled: _ZN5Caver12BindingValue13ValueWithBoolEb
 * Demangled: Caver::BindingValue::ValueWithBool(bool)
 *
 * Callers: 1
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002001A0  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x000000000021A064 string=0x000000000021A068 "U"
 *   insn=0x000000000021A07C string=0x000000000021A080 "Xm"
 *   insn=0x000000000021A080 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021A090 string=0x000000000021A094 "Sm"
 *   insn=0x000000000021A094 string=0x000000000021A098 "i&"
 *   insn=0x000000000021A098 string=0x000000000021A09C ")MD"
 *   insn=0x000000000021A0A8 string=0x000000000021A0AC "(A"
 *   insn=0x000000000021A0B0 string=0x000000000021A0B4 ""
 *   insn=0x000000000021A0C4 string=0x000000000021A0C8 """
 *   insn=0x000000000021A0D8 string=0x000000000021A0DC "h"
 *   insn=0x000000000021A0DC string=0x000000000021A0E0 "j"
 *   insn=0x000000000021A0E0 string=0x000000000021A0E4 "("
 *   insn=0x000000000021A0EC string=0x000000000021A0F0 "A"
 *   insn=0x000000000021A0F4 string=0x000000000021A0F8 "\t@"
 *   insn=0x000000000021A104 string=0x000000000021A108 ""
 *   insn=0x000000000021A10C string=0x000000000021A110 "A"
 *   insn=0x000000000021A114 string=0x000000000021A118 "@"
 *   insn=0x000000000021A12C string=0x000000000021A130 "i"
 *   insn=0x000000000021A130 string=0x000000000021A134 "h"
 *   insn=0x000000000021A138 string=0x000000000021A13C "3"
 *   insn=0x000000000021A13C string=0x000000000021A140 "h"
 *   insn=0x000000000021A140 string=0x000000000021A144 ""
 *   insn=0x000000000021A144 string=0x000000000021A148 "h"
 *   insn=0x000000000021A14C string=0x000000000021A150 "h"
 *   insn=0x000000000021A154 string=0x000000000021A158 "\t@"
 *   insn=0x000000000021A15C string=0x000000000021A160 "h\n@"
 *   insn=0x000000000021A160 string=0x000000000021A164 ""
 *   insn=0x000000000021A164 string=0x000000000021A168 "h\n"
 *   insn=0x000000000021A16C string=0x000000000021A170 "h"
 *   insn=0x000000000021A174 string=0x000000000021A178 "@"
 *   insn=0x000000000021A18C string=0x000000000021A1A4 "Kp"
 *   insn=0x000000000021A1A4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021A1AC string=0x000000000021A1B0 "4"
 *   insn=0x000000000021A1B4 string=0x000000000021A1B8 ""
 *   insn=0x000000000021A1C4 string=0x000000000021A1C8 "\t@"
 *   insn=0x000000000021A1D4 string=0x000000000021A1D8 ""
 *   insn=0x000000000021A1E4 string=0x000000000021A1E8 "@"
 *   insn=0x000000000021A1F8 string=0x000000000021A1FC "T"
 *   insn=0x000000000021A200 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000021A204 string=0x000000000021A208 "*t"
 *   insn=0x000000000021A208 string=0x000000000021A20C "Y"
 *   insn=0x000000000021A208 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021A214 string=0x00000000001FD590 "0'"
 *   insn=0x000000000021A234 string=0x000000000021A238 "U"
 *   insn=0x000000000021A244 string=0x000000000021A248 ""
 *   insn=0x000000000021A264 string=0x000000000021A268 "I&"
 *   insn=0x000000000021A268 string=0x000000000021A26C ")MG"
 *   insn=0x000000000021A278 string=0x000000000021A27C "(A"
 *   insn=0x000000000021A280 string=0x000000000021A284 ""
 *   insn=0x000000000021A2A8 string=0x000000000021A2AC "h"
 *   insn=0x000000000021A2AC string=0x000000000021A2B0 "j"
 *   insn=0x000000000021A2B0 string=0x000000000021A2B4 "("
 *   insn=0x000000000021A2BC string=0x000000000021A2C0 "A"
 *   insn=0x000000000021A2C4 string=0x000000000021A2C8 "\t@"
 *   insn=0x000000000021A2D4 string=0x000000000021A2D8 ""
 *   insn=0x000000000021A2DC string=0x000000000021A2E0 "A"
 *   insn=0x000000000021A2E4 string=0x000000000021A2E8 "@"
 *   insn=0x000000000021A2FC string=0x000000000021A300 "i"
 *   insn=0x000000000021A300 string=0x000000000021A304 "h"
 *   insn=0x000000000021A308 string=0x000000000021A30C "3"
 *   insn=0x000000000021A30C string=0x000000000021A310 "h"
 *   insn=0x000000000021A310 string=0x000000000021A314 ""
 *   insn=0x000000000021A314 string=0x000000000021A318 "h"
 *   insn=0x000000000021A31C string=0x000000000021A320 "h"
 *   insn=0x000000000021A324 string=0x000000000021A328 "\t@"
 *   insn=0x000000000021A32C string=0x000000000021A330 "h\n@"
 *   insn=0x000000000021A330 string=0x000000000021A334 ""
 *   insn=0x000000000021A334 string=0x000000000021A338 "h\n"
 *   insn=0x000000000021A33C string=0x000000000021A340 "h"
 *   insn=0x000000000021A344 string=0x000000000021A348 "@"
 *   insn=0x000000000021A380 string=0x000000000021A384 "4"
 *   insn=0x000000000021A388 string=0x000000000021A38C ""
 *   insn=0x000000000021A398 string=0x000000000021A39C "\t@"
 *   insn=0x000000000021A3A8 string=0x000000000021A3AC ""
 *   insn=0x000000000021A3B8 string=0x000000000021A3BC "@"
 *   insn=0x000000000021A3C8 string=0x000000000021A3CC ">"
 *   insn=0x000000000021A3E4 string=0x000000000021A3E8 "j"
 *   insn=0x000000000021A3F4 string=0x000000000021A3F8 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ValueWithBool(Caver::BindingValue *this@<X0>, __int64 a2@<X8>)
{
  char v3; // w22
  _BYTE *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // [xsp+58h] [xbp-30h]

  v3 = (unsigned __int8)this & 1;
  _ReadStatusReg(TPIDR_EL0);
  v4 = (_BYTE *)operator new(1u);
  *v4 = v3;
  v5 = operator new(0x20u);
  *(_QWORD *)(v5 + 24) = v4;
  *(int64x2_t *)(v5 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v5 = &off_6B9788;
  v10 = (_QWORD *)v5;
  boost::detail::sp_enable_shared_from_this();
  if ( v10 )
  {
    v6 = v10[1];
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = v10;
    *(_DWORD *)a2 = 4;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    v10[1] = v6 + 1;
    if ( v6 == -1 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v7 = v10[2] - 1LL;
      v10[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_DWORD *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v10 )
  {
    v8 = v10[1] - 1LL;
    v10[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v9 = v10[2] - 1LL;
      v10[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
}

