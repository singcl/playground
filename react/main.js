(function(){
    // REACT 15.6.1
    // @see https://www.jianshu.com/p/45f4b2137878
    var TComponent = React.createClass({
        getInitialState: function() {
            return {
                color: 'yellow',
                name: "singcl"
            }
        },

        getDefaultProps: function() {
            //
        },

        componentDidMount() {
            var that = this
            this.setState({
                color: 'blue'
            })

            setTimeout(function() {
                that.setState({color: 'red'})
                console.log("10s later")
            }, 10000)
        },

        shouldComponentUpdate() {
            if (this.state.color === 'blue') {
                return true;
            } else {
                return false;
            }
        },

        render() {
            return <div>
            {this.state.color}
            </div>
        }
    })

    var RDOM = ReactDOM.render(<TComponent sex="female">hoho singcl</TComponent>, document.getElementById("root"))
})();
