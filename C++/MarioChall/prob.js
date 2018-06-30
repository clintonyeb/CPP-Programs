let text = "thequickbrownfoxjumpsoverthelazydog";
let crypt = "VNOUNLUHEVJPZQWZRIIWARFJTFPGARMXSKEVYOLYXCARBANLIWVNOUNLHSKECDQMGTARDB";
crypt = crypt.toLowerCase();

let query = "HSJPTFEVMX";
query = query.toLowerCase();
let res = "";

for(let i = 0; i < query.length; i+=2) {
  let q = query[i] + query[i+1];
  let ind = crypt.indexOf(q);
  let f = ind / 2;
  res += text[f];
}

console.log(res);
