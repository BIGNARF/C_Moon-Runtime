
use rlua::{Lua, Function};

fn start_lua() -> rlua::Result<()> {
    // Create a Lua context
    let lua = Lua::new();

    lua.context(|lua_ctx| {
        // Load a Lua script
        lua_ctx.load(
            r#"
            function add(a, b)
                return a + b
            end

            function tester()
                --local jit = require("jit")
                if jit then
                    local version = jit.version
                    print("LuaJIT version:", version)
                else
                    print("LuaJIT is not available")
                end
            end
            "#
        )
        .exec()?;
        // Get a reference to the Lua function
        //let add_function: Function = lua_ctx.globals().get("add")?;

        let tester_function: Function = lua_ctx.globals().get("tester")?;
        tester_function.call(())?;

        // Call the Lua function with arguments
        //let result: i32 = add_function.call((5, 7))?;

        //println!("Result from Lua function: {}", result);
        
        Ok(())
    })
}

pub fn Testing(){
    println!("testing, ahora en latinoamerica");
}