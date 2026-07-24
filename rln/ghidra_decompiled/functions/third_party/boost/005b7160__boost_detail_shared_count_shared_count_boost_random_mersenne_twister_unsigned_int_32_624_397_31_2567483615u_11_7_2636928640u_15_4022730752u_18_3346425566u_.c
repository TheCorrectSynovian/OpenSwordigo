/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7160
 * Function: boost::detail::shared_count::shared_count<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
 * Signature: undefined __thiscall shared_count<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(shared_count * this, mersenne_twister * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<boost::random::mersenne_twister<unsigned int, 32, 624,
   397, 31, 2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u>
   >(boost::random::mersenne_twister<unsigned int, 32, 624, 397, 31, 2567483615u, 11, 7,
   2636928640u, 15, 4022730752u, 18, 3346425566u>*) */

void __thiscall
boost::detail::shared_count::
shared_count<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
          (shared_count *this,mersenne_twister *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4f58;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


