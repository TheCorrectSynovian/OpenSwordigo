/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000493308
 * Mangled: _ZN5Caver14GUIApplication14DispatchEventsEv
 * Demangled: Caver::GUIApplication::DispatchEvents(void)
 *
 * Callers: 1
 *   0x00000000001FA410  Caver::GUIApplication::DispatchEvents(void)
 *
 * Callees: 16
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4710  Caver::GUIApplication::QueuedEvent::~QueuedEvent()
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D60  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFF40  std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_create_nodes(Caver::GUIApplication::QueuedEvent**,Caver::GUIApplication::QueuedEvent**)
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049373C  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x000000000054A024  sub_54A024
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x0000000000493318 string=0x000000000049331C "U"
 *   insn=0x0000000000493328 string=0x000000000049332C "h"
 *   insn=0x000000000049332C string=0x0000000000493330 "v\n@"
 *   insn=0x0000000000493354 string=0x0000000000493358 ""
 *   insn=0x0000000000493358 string=0x000000000049335C ""
 *   insn=0x000000000049335C string=0x0000000000493360 ""
 *   insn=0x0000000000493398 string=0x000000000049339C "\t"
 *   insn=0x000000000049339C string=0x00000000004933A0 ")"
 *   insn=0x00000000004933A0 string=0x00000000004933A4 "\t"
 *   insn=0x00000000004933B8 string=0x00000000004933BC "\t"
 *   insn=0x00000000004933B8 string=0x00000000004933C8 "h"
 *   insn=0x00000000004933BC string=0x00000000004933C0 ")"
 *   insn=0x00000000004933C0 string=0x00000000004933C4 "\t"
 *   insn=0x00000000004933C8 string=0x00000000004933CC "`\n@"
 *   insn=0x00000000004933CC string=0x00000000004933D0 "!"
 *   insn=0x00000000004933DC string=0x00000000004933E0 "h\n@"
 *   insn=0x00000000004933DC string=0x00000000001F4710 "P'"
 *   insn=0x00000000004933E0 string=0x00000000004933E4 "!"
 *   insn=0x00000000004933E4 string=0x00000000004933E8 "h\n"
 *   insn=0x00000000004933F0 string=0x00000000004933F4 """
 *   insn=0x00000000004933F8 string=0x00000000004933FC "`"
 *   insn=0x0000000000493400 string=0x0000000000493404 "h"
 *   insn=0x0000000000493400 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000493404 string=0x0000000000493408 "\t!"
 *   insn=0x0000000000493408 string=0x000000000049340C "i"
 *   insn=0x000000000049340C string=0x0000000000493410 ""
 *   insn=0x0000000000493410 string=0x0000000000493414 "h""
 *   insn=0x0000000000493414 string=0x0000000000493418 ""
 *   insn=0x0000000000493418 string=0x000000000049341C "h"
 *   insn=0x0000000000493428 string=0x000000000049342C ""
 *   insn=0x0000000000493430 string=0x0000000000493434 ""
 *   insn=0x0000000000493444 string=0x0000000000493448 "h"
 *   insn=0x0000000000493448 string=0x000000000049344C "v\n@"
 *   insn=0x0000000000493460 string=0x0000000000493464 "A"
 *   insn=0x000000000049347C string=0x0000000000493480 "L"
 *   insn=0x0000000000493484 string=0x0000000000493488 "^"
 *   insn=0x000000000049348C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004934CC string=0x00000000004934D0 "h"
 *   insn=0x00000000004934DC string=0x00000000004934E0 "H"
 *   insn=0x00000000004934E8 string=0x00000000004934EC ""
 *   insn=0x00000000004934FC string=0x0000000000493500 ""
 *   insn=0x0000000000493504 string=0x0000000000493508 "\t"
 *   insn=0x0000000000493508 string=0x000000000049350C "h"
 *   insn=0x000000000049350C string=0x0000000000493510 "i"
 *   insn=0x0000000000493510 string=0x000000000049359C ">G"
 *   insn=0x0000000000493518 string=0x000000000049351C "1"
 *   insn=0x000000000049351C string=0x0000000000493520 "h"
 *   insn=0x000000000049351C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000493520 string=0x0000000000493524 "`"
 *   insn=0x0000000000493524 string=0x0000000000493528 ""
 *   insn=0x0000000000493528 string=0x000000000049352C ""
 *   insn=0x000000000049352C string=0x0000000000493530 ""
 *   insn=0x0000000000493544 string=0x0000000000493548 "~"
 *   insn=0x0000000000493550 string=0x0000000000493554 "i&"
 *   insn=0x0000000000493554 string=0x0000000000493558 "\t"
 *   insn=0x0000000000493558 string=0x000000000049355C "\t"
 *   insn=0x000000000049355C string=0x0000000000493560 "h""
 *   insn=0x0000000000493560 string=0x0000000000493564 "iZ"
 *   insn=0x000000000049356C string=0x0000000000493570 ")"
 *   insn=0x0000000000493574 string=0x0000000000493578 "L"
 *   insn=0x0000000000493578 string=0x000000000049357C "))"
 *   insn=0x000000000049357C string=0x0000000000493580 "i*"
 *   insn=0x0000000000493580 string=0x0000000000493584 "l""
 *   insn=0x00000000004935A0 string=0x00000000004935A4 "`"
 *   insn=0x00000000004935A0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004935A4 string=0x00000000004935A8 "B"
 *   insn=0x00000000004935AC string=0x00000000004935B0 "p"
 *   insn=0x00000000004935B8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004935C0 string=0x00000000004935C4 "b"
 *   insn=0x0000000000493618 string=0x000000000049361C "`"
 *   insn=0x0000000000493618 string=0x000000000049362C "Q"
 *   insn=0x000000000049361C string=0x0000000000493620 "$"
 *   insn=0x000000000049363C string=0x0000000000493640 "C"
 *   insn=0x0000000000493654 string=0x0000000000493658 "T"
 *   insn=0x0000000000493664 string=0x0000000000493668 "`"
 *   insn=0x0000000000493668 string=0x000000000049366C "h&B"
 *   insn=0x000000000049366C string=0x0000000000493670 "a"
 *   insn=0x0000000000493670 string=0x0000000000493674 "j.D"
 *   insn=0x0000000000493690 string=0x0000000000493694 "`"
 *   insn=0x0000000000493690 string=0x00000000001F6D60 "0'"
 *   insn=0x0000000000493698 string=0x000000000049369C "u&@"
 *   insn=0x000000000049369C string=0x00000000004936A0 "h"
 *   insn=0x00000000004936C0 string=0x00000000004936C4 "`"
 *   insn=0x00000000004936FC string=0x0000000000493700 "u&@"
 *   insn=0x0000000000493700 string=0x0000000000493704 "i"
 *   insn=0x0000000000493708 string=0x000000000049370C "?"
 *   insn=0x0000000000493710 string=0x0000000000493714 "6!"
 *   insn=0x0000000000493724 string=0x0000000000493728 "h"
 *   insn=0x0000000000493734 string=0x0000000000493738 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIApplication::DispatchEvents(Caver::GUIApplication *this)
{
  __int64 *i; // x22
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::GUIApplication::QueuedEvent *v6; // x0
  __int64 v7; // x8
  __int64 *v8; // x9
  __int64 v9; // x8
  __int64 v10; // [xsp+B8h] [xbp-80h] BYREF
  __int64 v11; // [xsp+C0h] [xbp-78h]
  __int128 v12; // [xsp+C8h] [xbp-70h] BYREF
  __int64 v13; // [xsp+D8h] [xbp-60h]
  __int64 v14; // [xsp+E0h] [xbp-58h]
  __int64 v15; // [xsp+E8h] [xbp-50h]
  __int64 v16; // [xsp+F0h] [xbp-48h]
  __int64 v17; // [xsp+F8h] [xbp-40h]
  _BYTE v18[16]; // [xsp+100h] [xbp-38h] BYREF
  __int64 v19; // [xsp+110h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  for ( i = (__int64 *)*((_QWORD *)this + 2); *((__int64 **)this + 6) != i; i = (__int64 *)*((_QWORD *)this + 2) )
  {
    v10 = *i;
    v11 = 0;
    v3 = i[1];
    if ( v3 )
    {
      v11 = i[1];
      if ( (v3 & 1) != 0 )
      {
        v13 = i[4];
        v12 = *((_OWORD *)i + 1);
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v3 & 0xFFFFFFFFFFFFFFFELL))(i + 2, &v12, 0);
      }
    }
    v14 = i[5];
    v4 = i[6];
    v15 = v4;
    if ( v4 )
      ++*(_QWORD *)(v4 + 8);
    v16 = i[7];
    v5 = i[8];
    v17 = v5;
    if ( v5 )
      ++*(_QWORD *)(v5 + 8);
    v6 = (Caver::GUIApplication::QueuedEvent *)*((_QWORD *)this + 2);
    if ( v6 == (Caver::GUIApplication::QueuedEvent *)(*((_QWORD *)this + 4) - 72LL) )
    {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(v6);
      operator delete(*((void **)this + 3));
      v8 = (__int64 *)(*((_QWORD *)this + 5) + 8LL);
      *((_QWORD *)this + 5) = v8;
      v9 = *v8;
      *((_QWORD *)this + 2) = *v8;
      *((_QWORD *)this + 3) = v9;
      *((_QWORD *)this + 4) = v9 + 504;
      v7 = v11;
      if ( !v11 )
      {
LABEL_16:
        boost::bad_function_call::bad_function_call((boost::bad_function_call *)v18);
        boost::throw_exception<boost::bad_function_call>();
      }
    }
    else
    {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(v6);
      *((_QWORD *)this + 2) += 72LL;
      v7 = v11;
      if ( !v11 )
        goto LABEL_16;
    }
    (*(void (__fastcall **)(__int128 *, __int64, __int64))((v7 & 0xFFFFFFFFFFFFFFFELL) + 8))(&v12, v14, v16);
    Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)&v10);
  }
}

