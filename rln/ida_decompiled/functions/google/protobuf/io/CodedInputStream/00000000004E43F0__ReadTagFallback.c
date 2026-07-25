/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E43F0
 * Mangled: _ZN6google8protobuf2io16CodedInputStream15ReadTagFallbackEv
 * Demangled: google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *
 * Callers: 1
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 73
 *   insn=0x00000000004E43FC string=0x00000000004E4400 "T"
 *   insn=0x00000000004E440C string=0x00000000004E4410 "h"
 *   insn=0x00000000004E4410 string=0x00000000004E4414 "*"
 *   insn=0x00000000004E4414 string=0x00000000004E4418 "_%"
 *   insn=0x00000000004E441C string=0x00000000004E4420 "?"
 *   insn=0x00000000004E4424 string=0x00000000004E4428 "*"
 *   insn=0x00000000004E4428 string=0x00000000004E442C "j"
 *   insn=0x00000000004E4430 string=0x00000000004E4434 "*"
 *   insn=0x00000000004E4434 string=0x00000000004E4438 "@"
 *   insn=0x00000000004E4438 string=0x00000000004E443C "*86\t"
 *   insn=0x00000000004E443C string=0x00000000004E4440 "\t"
 *   insn=0x00000000004E443C string=0x00000000004E45A0 "i"
 *   insn=0x00000000004E4440 string=0x00000000004E4444 "*"
 *   insn=0x00000000004E4444 string=0x00000000004E4448 "@"
 *   insn=0x00000000004E444C string=0x00000000004E4450 "\t\t"
 *   insn=0x00000000004E444C string=0x00000000004E4484 "\t\t@9*"
 *   insn=0x00000000004E4450 string=0x00000000004E4454 "S"
 *   insn=0x00000000004E445C string=0x00000000004E449C "h.@"
 *   insn=0x00000000004E4464 string=0x00000000004E4468 "\t"
 *   insn=0x00000000004E4468 string=0x00000000004E446C "I"
 *   insn=0x00000000004E446C string=0x00000000004E4470 " "
 *   insn=0x00000000004E4470 string=0x00000000004E4474 ""
 *   insn=0x00000000004E4478 string=0x00000000004E447C "h"
 *   insn=0x00000000004E447C string=0x00000000004E4480 "I"
 *   insn=0x00000000004E4484 string=0x00000000004E4488 "*"
 *   insn=0x00000000004E4488 string=0x00000000004E448C "@"
 *   insn=0x00000000004E4490 string=0x00000000004E4494 "\t"
 *   insn=0x00000000004E4490 string=0x00000000004E44EC "\t@9*"
 *   insn=0x00000000004E4494 string=0x00000000004E4498 "B"
 *   insn=0x00000000004E44A4 string=0x00000000004E44A8 "i"
 *   insn=0x00000000004E44A8 string=0x00000000004E44AC "j2@"
 *   insn=0x00000000004E44AC string=0x00000000004E44B0 "("
 *   insn=0x00000000004E44B4 string=0x00000000004E44B8 ""
 *   insn=0x00000000004E44C0 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E44C4 string=0x00000000004E44C8 "h"
 *   insn=0x00000000004E44C4 string=0x00000000004E4504 "i"
 *   insn=0x00000000004E44D8 string=0x00000000004E44DC ")|"
 *   insn=0x00000000004E44DC string=0x00000000004E44E0 " "
 *   insn=0x00000000004E44E4 string=0x00000000004E44E8 "/"
 *   insn=0x00000000004E44EC string=0x00000000004E44F0 "*"
 *   insn=0x00000000004E44F0 string=0x00000000004E44F4 "@"
 *   insn=0x00000000004E44F8 string=0x00000000004E44FC "\t"
 *   insn=0x00000000004E44F8 string=0x00000000004E4528 "\t"
 *   insn=0x00000000004E44FC string=0x00000000004E4500 "("
 *   insn=0x00000000004E4504 string=0x00000000004E4508 "j"
 *   insn=0x00000000004E4508 string=0x00000000004E450C ")"
 *   insn=0x00000000004E450C string=0x00000000004E4510 "?"
 *   insn=0x00000000004E4510 string=0x00000000004E4514 "J"
 *   insn=0x00000000004E4514 string=0x00000000004E453C "i*@"
 *   insn=0x00000000004E451C string=0x00000000004E4520 "h"
 *   insn=0x00000000004E4520 string=0x00000000004E4524 " "
 *   insn=0x00000000004E452C string=0x00000000004E4530 ")"
 *   insn=0x00000000004E4530 string=0x00000000004E4534 "\t"
 *   insn=0x00000000004E4530 string=0x00000000004E4554 "\t"
 *   insn=0x00000000004E4540 string=0x00000000004E4544 "?"
 *   insn=0x00000000004E4548 string=0x00000000004E454C "h"
 *   insn=0x00000000004E4554 string=0x00000000004E4558 "i"
 *   insn=0x00000000004E4558 string=0x00000000004E455C "\t"
 *   insn=0x00000000004E4558 string=0x00000000004E4564 "\t"
 *   insn=0x00000000004E4564 string=0x00000000004E4568 "i"
 *   insn=0x00000000004E4568 string=0x00000000004E456C "\t"
 *   insn=0x00000000004E4568 string=0x00000000004E4574 "\t"
 *   insn=0x00000000004E4574 string=0x00000000004E4578 "i"
 *   insn=0x00000000004E4578 string=0x00000000004E457C "\t!"
 *   insn=0x00000000004E4578 string=0x00000000004E4584 "\t!"
 *   insn=0x00000000004E457C string=0x00000000004E4580 ""
 *   insn=0x00000000004E4584 string=0x00000000004E4588 "i"
 *   insn=0x00000000004E4588 string=0x00000000004E458C "\t%"
 *   insn=0x00000000004E4588 string=0x00000000004E4594 "\t%"
 *   insn=0x00000000004E4594 string=0x00000000004E4598 "i"
 *   insn=0x00000000004E4598 string=0x00000000004E459C "\t)"
 *   insn=0x00000000004E45B0 string=0x00000000004E45CC "AG"
 *   insn=0x00000000004E45CC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadTagFallback(
        google::protobuf::io::CodedInputStream *this)
{
  char *v2; // x8
  unsigned __int8 *v3; // x9
  unsigned __int8 *v4; // x9
  __int64 result; // x0
  int v6; // w8
  int v7; // w8
  int v8; // w9
  unsigned __int64 v9[2]; // [xsp+0h] [xbp-20h] BYREF

  v9[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (char *)*((_QWORD *)this + 1);
  v3 = (unsigned __int8 *)*((_QWORD *)this + 2);
  if ( (int)v3 - (int)v2 <= 9 && (v3 <= (unsigned __int8 *)v2 || (char)*(v3 - 1) < 0) )
  {
    if ( v2 != (char *)v3 )
    {
      if ( v2 >= (char *)v3 )
        goto LABEL_17;
LABEL_9:
      if ( (*v2 & 0x80000000) == 0 )
      {
        result = (unsigned __int8)*v2;
        v9[0] = result;
        *((_QWORD *)this + 1) = v2 + 1;
        return result;
      }
LABEL_17:
      if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this, v9) & 1) != 0 )
        return v9[0];
      return 0;
    }
    v6 = *((_DWORD *)this + 11);
    if ( v6 < 1 || *((_DWORD *)this + 6) - v6 >= *((_DWORD *)this + 12) )
    {
      if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) != 0 )
      {
        v2 = (char *)*((_QWORD *)this + 1);
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 2) )
          goto LABEL_17;
        goto LABEL_9;
      }
      v7 = *((_DWORD *)this + 12);
      if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 11) >= v7 )
      {
        result = 0;
        *((_BYTE *)this + 36) = *((_DWORD *)this + 10) == v7;
        return result;
      }
    }
    result = 0;
    *((_BYTE *)this + 36) = 1;
    return result;
  }
  v4 = (unsigned __int8 *)(v2 + 1);
  result = *v2 & 0x7F;
  if ( *v2 < 0 )
  {
    result = ((v2[1] & 0x7F) << 7) | (unsigned int)result;
    if ( (v2[1] & 0x80) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 2);
      goto LABEL_36;
    }
    result = ((v2[2] & 0x7F) << 14) | (unsigned int)result;
    if ( (v2[2] & 0x80) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 3);
      goto LABEL_36;
    }
    result = ((v2[3] & 0x7F) << 21) | (unsigned int)result;
    if ( (v2[3] & 0x80) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 4);
      goto LABEL_36;
    }
    v8 = (unsigned __int8)v2[4];
    result = (unsigned int)result | (v8 << 28);
    if ( (v8 & 0x80) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 5);
      goto LABEL_36;
    }
    if ( (v2[5] & 0x80000000) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 6);
      goto LABEL_36;
    }
    if ( (v2[6] & 0x80000000) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 7);
      goto LABEL_36;
    }
    if ( (v2[7] & 0x80000000) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 8);
      goto LABEL_36;
    }
    if ( (v2[8] & 0x80000000) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 9);
      goto LABEL_36;
    }
    if ( (v2[9] & 0x80000000) == 0 )
    {
      v4 = (unsigned __int8 *)(v2 + 10);
      goto LABEL_36;
    }
    return 0;
  }
LABEL_36:
  *((_QWORD *)this + 1) = v4;
  return result;
}

