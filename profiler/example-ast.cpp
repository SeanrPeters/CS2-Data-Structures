
/////////////////////////////////////////////////////////////////////////////
//KSU
//Fall 2021
//Example of source code and srcML
//Source code

int search(int tbl[], int n, int key) {
    int result = -1;
    for (int i = 0; i < n; ++i) {
        if (key == tbl[i]) {
            result = i;
        }
    }
    return result;
}

/////////////////////////////////////////////////////////////////////////////
//srcML version of source code
//Indented to show tree structure

<function>
    <type><name>int</name></type>
    <name>search</name>
    <parameter_list>(
        <param><decl><type><name>int</name></type> <name><name>tbl</name><index>[]</index></$
        <param><decl><type><name>int</name></type> <name>n</name></decl></param>,
        <param><decl><type><name>int</name></type> <name>key</name></decl></param>
        )</parameter_list>
    <block>{<block_content>
        <decl_stmt><decl><type><name>int</name></type> <name>result</name> =<init> <expr>-1<$
        <for>for (<init><decl><type><name>int</name></type> <name>i</name> =<init> <expr>0</$
                  </init> <condition><expr><name>i</name> &lt;
                  <name>n</name></expr>;</condition> <incr><expr>++<name>i</name></expr></in$
                  <block>{<block_content>
                      <if>if <condition>(<expr><name>key</name> == <name><name>tbl</name><in$
                          <block>{<block_content>
                              <expr_stmt><expr><name>result</name> = <name>i</name></expr>;<$
                          </block_content>}</block></then></if>
        </block_content>}</block></for>
        <return>return <expr><name>result</name></expr>;</return>
    </block_content>}</block>
</function>

         
