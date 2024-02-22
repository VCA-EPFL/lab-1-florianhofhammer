import Vector::*;

typedef struct {
 Bool valid;
 Bit#(31) data;
 Bit#(4) index;
} ResultArbiter deriving (Eq, FShow);

function ResultArbiter arbitrate(Vector#(16, Bit#(1)) ready, Vector#(16, Bit#(31)) data);
    // Set up default return value
	ResultArbiter res = ResultArbiter{valid: False, data : 0, index: 0};

    // Get the index of the first element that is ready
    let f = findElem(pack(True), ready);
    // If a ready item is found, get the index and update the return value
    if (f matches tagged Valid .index)
        res = ResultArbiter{valid: True, data: data[index], index: pack(index)};

	return res;
endfunction
