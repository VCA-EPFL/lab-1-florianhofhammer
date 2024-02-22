import Vector::*;

typedef Bit#(16) Word;

function Vector#(16, Word) naiveShfl(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) resultVector = in; 
    for (Integer i = 0; i < 16; i = i + 1) begin
        Bit#(4) idx = fromInteger(i);
        resultVector[i] = in[shftAmnt+idx];
    end
    return resultVector;
endfunction


function Vector#(16, Word) barrelLeft(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) res = in;
    for (Integer s = 0; s < 4; s = s + 1) begin
        if (unpack(shftAmnt[s])) begin
            Bit#(4) shift_by = fromInteger(exp(2, s));
            res = naiveShfl(res, shift_by);
        end
    end
    return res;
endfunction
